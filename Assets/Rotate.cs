using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class Rotate : MonoBehaviour
{

    //string[] lines;
    //List<string> frameCountList;
    //int frameNumber;
    //string line;
    //System.DateTime startTime;
    //System.DateTime currentTime;
    //System.TimeSpan differenceTime;

    // Start is called before the first frame update
    void Start()
    {
        //frameNumber = 0;
        //frameCountList = new List<string>();
        //startTime = System.DateTime.Now;


        //// Add file header
        //frameCountList.Add("ObjectType = Image");
        //frameCountList.Add("NDims = 3");
        //frameCountList.Add("AnatomicalOrientation = RAI");
        //frameCountList.Add("BinaryData = True");
        //frameCountList.Add("CompressedData = False");
        //frameCountList.Add("DimSize = 0 0 97");
        //frameCountList.Add("ElementSpacing = 1 1 1");
        //frameCountList.Add("Offset = 0 0 0");
        //frameCountList.Add("TransformMatrix = 1 0 0 0 1 0 0 0 1");
        //frameCountList.Add("ElementType = MET_UCHAR");
        //frameCountList.Add("Kinds = domain domain list");

        //// Convert List to string Array
        //lines = frameCountList.ToArray();

        // Store text in RAM and write to file on application close
        // to avoid writing to disk every frame
        //System.IO.File.WriteAllLines(@"VuforiaSequence.seq.mha", lines);

        //string path = Path.Combine(Application.persistentDataPath, "MyFile.txt");

        //byte[] data = System.Text.Encoding.ASCII.GetBytes("ASDASDASd");
        //UnityEngine.Windows.File.WriteAllBytes(path, data);

    }

    // Update is called once per frame
    void Update()
    {
        this.transform.Rotate(Vector3.up * Time.deltaTime * 15f);
    }
}
