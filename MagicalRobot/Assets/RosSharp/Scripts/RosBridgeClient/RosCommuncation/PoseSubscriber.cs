using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace RosSharp.RosBridgeClient
{
    public class PoseSubscriber : UnitySubscriber<Messages.Geometry.Pose>
    {

        public Transform PublishedTransform;

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

        protected override void ReceiveMessage(Messages.Geometry.Pose message)
        {
            //Debug.Log("(PURE) ROS POS AND ROTATION");
            //Debug.Log(GetPosition(message));
            //Debug.Log(GetRotation(message).eulerAngles);
            position = GetPosition(message).Ros2Unity();
            rotation = GetRotation(message).Ros2Unity();
            //Debug.Log("(PURE) UNITY POS AND ROTATION");
            //Debug.Log(position);
           // Debug.Log(rotation.eulerAngles);
            isMessageReceived = true;
        }

        private void ProcessMessage()
        {
            PublishedTransform.localPosition = position;
            PublishedTransform.localRotation = rotation;
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