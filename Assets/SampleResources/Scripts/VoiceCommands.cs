/*===============================================================================
Copyright (c) 2020 PTC Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/

using Microsoft.MixedReality.Toolkit;
using UnityEngine;
using System.IO;

public class VoiceCommands : MonoBehaviour
{
    #region PUBLIC_METHODS

    public void Quit()
    {
        Application.Quit();
    }

    public void Reset()
    {
        SampleUtil.ResetObjectTracker();
    }
    public void Test()
    {
        this.Quit();
    }

    public void Collect()
    {
        GameObject target = GameObject.Find("ImageTarget_Astronaut");

        string path = Path.Combine(Application.persistentDataPath, "StaticSequence.seq.mha");
        //string path = Path.Combine(Application.persistentDataPath, "test.txt");

        string line = target.transform.localToWorldMatrix.ToString();

        byte[] data = System.Text.Encoding.ASCII.GetBytes(line);


        // Write file to Hololens
        UnityEngine.Windows.File.WriteAllBytes(path, data);


    }

    public void ShowHandMesh()
    {
        var handTrackingProfile = CoreServices.InputSystem?.InputSystemProfile?.HandTrackingProfile;

        if(handTrackingProfile != null)
        {
            handTrackingProfile.EnableHandMeshVisualization = true;
        }
        this.Collect();
    }

    public void HideHandMesh()
    {
        var handTrackingProfile = CoreServices.InputSystem?.InputSystemProfile?.HandTrackingProfile;

        if (handTrackingProfile != null)
        {
            handTrackingProfile.EnableHandMeshVisualization = false;
        }
        this.Quit();
    }

    #endregion // PUBLIC_METHODS
}