﻿/*
© Siemens AG, 2017-2018
Author: David Whitney (david_whitney@brown.edu)

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

using Newtonsoft.Json;

namespace RosSharp.RosBridgeClient.Messages.Shape
{
    public class Mesh : Message
    {
        [JsonIgnore]
        public const string RosMessageName = "shape_msgs/Mesh";
        public MeshTriangle[] triangles;
        public Geometry.Point[] verticies;
        public Mesh()
        {
            triangles = new MeshTriangle[0];
            verticies = new Geometry.Point[0];
        }
    }

}