﻿/*
© Siemens AG, 2017-2018
Author: Dr. Martin Bischoff (martin.bischoff@siemens.com)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
<http://www.apache.org/licenses/LICENSE-2.0>.
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

using UnityEngine;

namespace RosSharp.RosBridgeClient
{
    public class PoseStampedSetTransPublisher : UnityPublisher<Messages.Geometry.PoseStamped>
    {
        private Transform PublishedTransform;
        public string FrameId = "Unity";

        private Messages.Geometry.PoseStamped message;

        protected override void Start()
        {
            base.Start();
            InitializeMessage();
        }

        private void FixedUpdate()
        {
            //UpdateMessage();
            //can i just take this out, that okay?
        }

        private void InitializeMessage()
        {
            message = new Messages.Geometry.PoseStamped
            {
                header = new Messages.Standard.Header()
                {
                    frame_id = FrameId
                }
            };
        }

        public void setTransform(Transform t)
        {
            PublishedTransform = t;
        }

        public void UpdateMessage()
        {
            message.header.Update();
            message.pose.position = GetGeometryPoint(PublishedTransform.localPosition.Unity2Ros());
            message.pose.orientation = GetGeometryQuaternion(PublishedTransform.localRotation.Unity2Ros());

            //Debug.Log("(UPDATE MESSAGE) GO TO PICK ROS MESSAGE");
            //Debug.Log(PublishedTransform.localPosition.Unity2Ros());
            //Debug.Log(PublishedTransform.localRotation.Unity2Ros().eulerAngles);

            Publish(message);
        }

        private Messages.Geometry.Point GetGeometryPoint(Vector3 position)
        {
            Messages.Geometry.Point geometryPoint = new Messages.Geometry.Point();
            geometryPoint.x = position.x;
            geometryPoint.y = position.y;
            geometryPoint.z = position.z;
            return geometryPoint;
        }

        private Messages.Geometry.Quaternion GetGeometryQuaternion(Quaternion quaternion)
        {
            Messages.Geometry.Quaternion geometryQuaternion = new Messages.Geometry.Quaternion();
            geometryQuaternion.x = quaternion.x;
            geometryQuaternion.y = quaternion.y;
            geometryQuaternion.z = quaternion.z;
            geometryQuaternion.w = quaternion.w;
            return geometryQuaternion;
        }

    }
}