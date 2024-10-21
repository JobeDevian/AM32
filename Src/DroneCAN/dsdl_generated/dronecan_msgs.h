#pragma once
#include "dronecan.protocol.FlexDebug.h"
#include "uavcan.equipment.esc.RawCommand.h"
#include "uavcan.equipment.esc.RPMCommand.h"
#include "uavcan.equipment.esc.StatusExtended.h"
#include "uavcan.equipment.esc.Status.h"
#include "uavcan.equipment.safety.ArmingStatus.h"
#include "uavcan.protocol.debug.KeyValue.h"
#include "uavcan.protocol.debug.LogLevel.h"
#include "uavcan.protocol.debug.LogMessage.h"
#include "uavcan.protocol.dynamic_node_id.Allocation.h"
#include "uavcan.protocol.dynamic_node_id.server.AppendEntries.h"
#include "uavcan.protocol.dynamic_node_id.server.AppendEntries_req.h"
#include "uavcan.protocol.dynamic_node_id.server.AppendEntries_res.h"
#include "uavcan.protocol.dynamic_node_id.server.Discovery.h"
#include "uavcan.protocol.dynamic_node_id.server.Entry.h"
#include "uavcan.protocol.dynamic_node_id.server.RequestVote.h"
#include "uavcan.protocol.dynamic_node_id.server.RequestVote_req.h"
#include "uavcan.protocol.dynamic_node_id.server.RequestVote_res.h"
#include "uavcan.protocol.file.BeginFirmwareUpdate.h"
#include "uavcan.protocol.file.BeginFirmwareUpdate_req.h"
#include "uavcan.protocol.file.BeginFirmwareUpdate_res.h"
#include "uavcan.protocol.file.Delete.h"
#include "uavcan.protocol.file.Delete_req.h"
#include "uavcan.protocol.file.Delete_res.h"
#include "uavcan.protocol.file.EntryType.h"
#include "uavcan.protocol.file.Error.h"
#include "uavcan.protocol.file.GetDirectoryEntryInfo.h"
#include "uavcan.protocol.file.GetDirectoryEntryInfo_req.h"
#include "uavcan.protocol.file.GetDirectoryEntryInfo_res.h"
#include "uavcan.protocol.file.GetInfo.h"
#include "uavcan.protocol.file.GetInfo_req.h"
#include "uavcan.protocol.file.GetInfo_res.h"
#include "uavcan.protocol.file.Path.h"
#include "uavcan.protocol.file.Read.h"
#include "uavcan.protocol.file.Read_req.h"
#include "uavcan.protocol.file.Read_res.h"
#include "uavcan.protocol.file.Write.h"
#include "uavcan.protocol.file.Write_req.h"
#include "uavcan.protocol.file.Write_res.h"
#include "uavcan.protocol.GetNodeInfo.h"
#include "uavcan.protocol.GetNodeInfo_req.h"
#include "uavcan.protocol.GetNodeInfo_res.h"
#include "uavcan.protocol.HardwareVersion.h"
#include "uavcan.protocol.NodeStatus.h"
#include "uavcan.protocol.param.Empty.h"
#include "uavcan.protocol.param.ExecuteOpcode.h"
#include "uavcan.protocol.param.ExecuteOpcode_req.h"
#include "uavcan.protocol.param.ExecuteOpcode_res.h"
#include "uavcan.protocol.param.GetSet.h"
#include "uavcan.protocol.param.GetSet_req.h"
#include "uavcan.protocol.param.GetSet_res.h"
#include "uavcan.protocol.param.NumericValue.h"
#include "uavcan.protocol.param.Value.h"
#include "uavcan.protocol.RestartNode.h"
#include "uavcan.protocol.RestartNode_req.h"
#include "uavcan.protocol.RestartNode_res.h"
#include "uavcan.protocol.SoftwareVersion.h"
