using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class ReportPosition : MonoBehaviour
{

    string[] lines;
    List<string> frameCountList;
    int frameNumber;
    string line;
    System.DateTime startTime;
    System.DateTime currentTime;
    System.TimeSpan differenceTime;

    // Start is called before the first frame update
    void Start()
    {
        frameNumber = 0;

        frameCountList = new List<string>();
        startTime = System.DateTime.Now;


        // Add file header
        frameCountList.Add("ObjectType = Image\n");
        frameCountList.Add("NDims = 3\n");
        frameCountList.Add("AnatomicalOrientation = RAI\n");
        frameCountList.Add("BinaryData = True\n");
        frameCountList.Add("CompressedData = False\n");
        frameCountList.Add("DimSize = 0 0 97\n");
        frameCountList.Add("ElementSpacing = 1 1 1\n");
        frameCountList.Add("Offset = 0 0 0\n");
        frameCountList.Add("TransformMatrix = 1 0 0 0 1 0 0 0 1\n");
        frameCountList.Add("ElementType = MET_UCHAR\n");
        frameCountList.Add("Kinds = domain domain list\n");

        //Debug.Log("TEST");
        //Debug.Log("TEST2");

        //string path = Path.Combine(Application.persistentDataPath, "MyFile2.txt");

        //byte[] data = System.Text.Encoding.ASCII.GetBytes("ASDASDASd");
        //UnityEngine.Windows.File.WriteAllBytes(path, data);

        //// Convert List to string Array
        //lines = frameCountList.ToArray();

        // Store text in RAM and write to file on application close
        // to avoid writing to disk every frame
        //System.IO.File.WriteAllLines(@"C:\d\VuforiaSequence.seq.mha", lines);

    }

    // Update is called once per frame
    void Update()
    {

        //Debug.Log(this.transform.position); 
        Debug.Log(this.transform.localToWorldMatrix);
        // 1st Line
        line = "Seq_Frame" + frameNumber.ToString("D4") + "_SequenceTransform =" + ParseTransform(this.transform.localToWorldMatrix) + "\n";
        //line = "Seq_Frame" + frameNumber.ToString("D4") + "_VuforiaSequenceTransform =" + "0.999602 0.00249373 0.0280862 106.823 -0.00196427 0.99982 -0.0188633 228.745 -0.0281282 0.0188006 0.999427 -1570.36 0 0 0 1 ";
        //line = "Seq_Frame" + frameNumber.ToString("D4") + "_VuforiaSequenceTransform =" + Camera.main.transform.localToWorldMatrix.ToString();
        frameCountList.Add(line);

        // 2nd Line
        line = "Seq_Frame" + frameNumber.ToString("D4") + "_VuforiaSequenceTransformStatus = OK\n";
        frameCountList.Add(line);

        // 3rd Line
        currentTime = System.DateTime.Now;
        differenceTime = currentTime.Subtract(startTime);
        line = "Seq_Frame" + frameNumber.ToString("D4") + "_Timestamp = " + differenceTime.TotalSeconds.ToString() + "\n";
        frameCountList.Add(line);


        frameNumber++;
    }

    void OnApplicationQuit()
    {
        frameCountList.Add("ElementDataFile = LOCAL");

        // Convert List to string Array
        lines = frameCountList.ToArray();

        // Store text in RAM and write to file on application close
        // to avoid writing to disk every frame

        string path = Path.Combine(Application.persistentDataPath, "VuforiaSequence.seq.mha");
        //string path = Path.Combine(Application.persistentDataPath, "test.txt");
        byte[] data = System.Text.Encoding.ASCII.GetBytes(string.Concat(lines));

        // Write file to Hololens
        UnityEngine.Windows.File.WriteAllBytes(path, data);

        //System.IO.File.WriteAllLines(@"C:\d\VuforiaSequence.seq.mha", lines);
    }


    // Takes 4x4 matr, and outputs formated string for slicer
    string ParseTransform(Matrix4x4 matr)
    {

        string a = "";

        // TODO: Investigate whether inverting the Z coordinate is required 
        // due to coordinate frame reflection

        for (int i = 0; i < 3; i++)
        {
            a += matr.GetRow(i)[0].ToString() + " ";
            a += matr.GetRow(i)[1].ToString() + " ";
            a += matr.GetRow(i)[2].ToString() + " ";
            a += ((matr.GetRow(i)[3]) * 1000).ToString() + " ";
        }
        a += "0 0 0 1";

        return a;
    }

}
