using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace RosSharp.RosBridgeClient
{
    public class PoseLeftHandSubscriber : UnitySubscriber<Messages.Geometry.Pose>
    {
        private Vector3 position;
        private Quaternion rotation;
        private bool isMessageReceived;

        protected override void Start()
        {
            base.Start();
        }

        private void Update()
        {
            if (isMessageReceived)
                ProcessMessage();
        }

        public Quaternion getRotation()
        {
            return rotation;
        }

        protected override void ReceiveMessage(Messages.Geometry.Pose message)
        {
            //Debug.Log("(PURE)Below should be ros (BEFORE): position and rotation");
            //Debug.Log(GetPosition(message));
            //Debug.Log(GetRotation(message));
            //Debug.Log(GetRotation(message).eulerAngles);
            position = GetPosition(message).Ros2Unity();
            rotation = GetRotation(message).Ros2Unity();
            //Debug.Log("(PURE)Below should be UNITY: position and rotation");
            //Debug.Log(position);
           // Debug.Log(rotation);
            //Debug.Log(rotation.eulerAngles);
            //Debug.Log("(PURE)Below should be ros (AFTER): position and rotation");
            //Debug.Log(position.Unity2Ros());
            //Debug.Log(rotation.Unity2Ros());
            //Debug.Log(rotation.Unity2Ros().eulerAngles);
            isMessageReceived = true;
        }

        private void ProcessMessage()
        {
            //Debug.Log("(MOVO) local and global rotation");
            //Debug.Log(PublishedTransform.localRotation);
            //Debug.Log(PublishedTransform.rotation);
            isMessageReceived = false;
        }

        private Vector3 GetPosition(Messages.Geometry.Pose message)
        {
            return new Vector3(
                message.position.x,
                message.position.y,
                message.position.z);
        }

        private Quaternion GetRotation(Messages.Geometry.Pose message)
        {
            return new Quaternion(
                message.orientation.x,
                message.orientation.y,
                message.orientation.z,
                message.orientation.w);
        }
    }
}