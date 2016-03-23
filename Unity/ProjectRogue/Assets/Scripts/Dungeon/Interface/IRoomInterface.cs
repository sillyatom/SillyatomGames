using System.Collections.Generic;
using UnityEngine;

public interface IRoomInterface
{
    int id { get; set; }
    Color color { get; set; }
    int regionId { get; set; }
    bool isBlocked { get; set; }
    CustomRect rect { get; set; }
    bool hasSingleExit { get; set; }
    CustomRect roomRect { get; set; }
    List<ExitConfig> exitConfig { get; set; }
    List<Vector3> exitPositions { get; set; }
}