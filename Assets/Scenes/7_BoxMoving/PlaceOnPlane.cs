using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class PlaceOnPlane : MonoBehaviour
{
    public ARRaycastManager raycastManager;
    public GameObject prefab;

    void Update()
    {
        if (Input.touchCount == 0) return;

        var touch = Input.GetTouch(0);
        if (touch.phase != TouchPhase.Began) return;

        var hits = new List<ARRaycastHit>();
        if (raycastManager.Raycast(touch.position, hits, UnityEngine.XR.ARSubsystems.TrackableType.PlaneWithinBounds))
        {
            var pose = hits[0].pose;
            Instantiate(prefab, pose.position, pose.rotation);
        }
    }
}
