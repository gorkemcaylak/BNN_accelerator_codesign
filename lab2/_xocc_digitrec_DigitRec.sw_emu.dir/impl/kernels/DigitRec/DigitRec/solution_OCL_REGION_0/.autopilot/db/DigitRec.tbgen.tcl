set C_TypeInfoList {{ 
"DigitRec" : [[], { "return": [[], "void"]} , [{"ExternC" : 1}], [ {"training_data": [[],{ "pointer": "0"}] }, {"testing_data": [[],{ "pointer": "0"}] }, {"results": [[],{ "pointer": "1"}] }],[],""], 
"0": [ "digit", {"typedef": [[[],"2"],""]}], 
"2": [ "ap_uint<64>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 64}}]],""]}}], 
"1": [ "bit4_t", {"typedef": [[[],"3"],""]}], 
"3": [ "ap_uint<4>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 4}}]],""]}}]
}}
set moduleName DigitRec
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {DigitRec}
set C_modelType { void 0 }
set C_modelArgList {
	{ gmem int 64 regular {axi_master 2}  }
	{ training_data_V int 64 regular {axi_slave 0}  }
	{ testing_data_V int 64 regular {axi_slave 0}  }
	{ results_V int 64 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "gmem", "interface" : "axi_master", "bitwidth" : 64, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 0,"step" : 16}]}]},{"low":4,"up":7,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 4,"up": 7},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 4,"up": 7},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 1,"up" : 0,"step" : 16}]}]},{"low":8,"up":11,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 8,"up": 11},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 8,"up": 11},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 2,"up" : 0,"step" : 16}]}]},{"low":12,"up":15,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 12,"up": 15},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 12,"up": 15},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 3,"up" : 0,"step" : 16}]}]},{"low":16,"up":19,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 16,"up": 19},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 16,"up": 19},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 4,"up" : 0,"step" : 16}]}]},{"low":20,"up":23,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 20,"up": 23},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 20,"up": 23},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 5,"up" : 0,"step" : 16}]}]},{"low":24,"up":27,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 24,"up": 27},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 24,"up": 27},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 6,"up" : 0,"step" : 16}]}]},{"low":28,"up":31,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 28,"up": 31},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 28,"up": 31},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 7,"up" : 0,"step" : 16}]}]},{"low":32,"up":35,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 32,"up": 35},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 32,"up": 35},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 8,"up" : 0,"step" : 16}]}]},{"low":36,"up":39,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 36,"up": 39},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 36,"up": 39},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 9,"up" : 0,"step" : 16}]}]},{"low":40,"up":43,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 40,"up": 43},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 40,"up": 43},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 10,"up" : 0,"step" : 16}]}]},{"low":44,"up":47,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 44,"up": 47},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 44,"up": 47},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 11,"up" : 0,"step" : 16}]}]},{"low":48,"up":51,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 48,"up": 51},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 48,"up": 51},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 12,"up" : 0,"step" : 16}]}]},{"low":52,"up":55,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 52,"up": 55},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 52,"up": 55},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 13,"up" : 0,"step" : 16}]}]},{"low":56,"up":59,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 56,"up": 59},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 56,"up": 59},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 14,"up" : 0,"step" : 16}]}]},{"low":60,"up":63,"cElement": [{"cName": "training_data.V","cData": "uint64","bit_use": { "low": 60,"up": 63},"offset": { "type": "dynamic","port_name": "training_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "testing_data.V","cData": "uint64","bit_use": { "low": 60,"up": 63},"offset": { "type": "dynamic","port_name": "testing_data_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "results.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"offset": { "type": "dynamic","port_name": "results_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 15,"up" : 0,"step" : 16}]}]}]} , 
 	{ "Name" : "training_data_V", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":27}} , 
 	{ "Name" : "testing_data_V", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":28}, "offset_end" : {"in":39}} , 
 	{ "Name" : "results_V", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":40}, "offset_end" : {"in":51}} ]}
# RTL Port declarations: 
set portNum 65
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_gmem_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_AWADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_gmem_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_WDATA sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_WSTRB sc_out sc_lv 8 signal 0 } 
	{ m_axi_gmem_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_ARADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_gmem_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_RDATA sc_in sc_lv 64 signal 0 } 
	{ m_axi_gmem_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_gmem_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_gmem_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_BUSER sc_in sc_lv 1 signal 0 } 
	{ s_axi_control_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_control_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_control_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_control_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_control_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_control_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_control_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "control", "role": "AWADDR" },"address":[{"name":"DigitRec","role":"start","value":"0","valid_bit":"0"},{"name":"DigitRec","role":"continue","value":"0","valid_bit":"4"},{"name":"DigitRec","role":"auto_start","value":"0","valid_bit":"7"},{"name":"training_data_V","role":"data","value":"16"},{"name":"testing_data_V","role":"data","value":"28"},{"name":"results_V","role":"data","value":"40"}] },
	{ "name": "s_axi_control_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWVALID" } },
	{ "name": "s_axi_control_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWREADY" } },
	{ "name": "s_axi_control_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WVALID" } },
	{ "name": "s_axi_control_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WREADY" } },
	{ "name": "s_axi_control_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "WDATA" } },
	{ "name": "s_axi_control_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "WSTRB" } },
	{ "name": "s_axi_control_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "control", "role": "ARADDR" },"address":[{"name":"DigitRec","role":"start","value":"0","valid_bit":"0"},{"name":"DigitRec","role":"done","value":"0","valid_bit":"1"},{"name":"DigitRec","role":"idle","value":"0","valid_bit":"2"},{"name":"DigitRec","role":"ready","value":"0","valid_bit":"3"},{"name":"DigitRec","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_control_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARVALID" } },
	{ "name": "s_axi_control_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARREADY" } },
	{ "name": "s_axi_control_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RVALID" } },
	{ "name": "s_axi_control_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RREADY" } },
	{ "name": "s_axi_control_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "RDATA" } },
	{ "name": "s_axi_control_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "RRESP" } },
	{ "name": "s_axi_control_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BVALID" } },
	{ "name": "s_axi_control_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BREADY" } },
	{ "name": "s_axi_control_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_gmem_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWVALID" }} , 
 	{ "name": "m_axi_gmem_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWREADY" }} , 
 	{ "name": "m_axi_gmem_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "AWADDR" }} , 
 	{ "name": "m_axi_gmem_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWID" }} , 
 	{ "name": "m_axi_gmem_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "AWLEN" }} , 
 	{ "name": "m_axi_gmem_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_gmem_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "AWBURST" }} , 
 	{ "name": "m_axi_gmem_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_gmem_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_gmem_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "AWPROT" }} , 
 	{ "name": "m_axi_gmem_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWQOS" }} , 
 	{ "name": "m_axi_gmem_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWREGION" }} , 
 	{ "name": "m_axi_gmem_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWUSER" }} , 
 	{ "name": "m_axi_gmem_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WVALID" }} , 
 	{ "name": "m_axi_gmem_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WREADY" }} , 
 	{ "name": "m_axi_gmem_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "WDATA" }} , 
 	{ "name": "m_axi_gmem_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "WSTRB" }} , 
 	{ "name": "m_axi_gmem_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WLAST" }} , 
 	{ "name": "m_axi_gmem_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WID" }} , 
 	{ "name": "m_axi_gmem_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WUSER" }} , 
 	{ "name": "m_axi_gmem_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARVALID" }} , 
 	{ "name": "m_axi_gmem_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARREADY" }} , 
 	{ "name": "m_axi_gmem_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "ARADDR" }} , 
 	{ "name": "m_axi_gmem_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARID" }} , 
 	{ "name": "m_axi_gmem_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "ARLEN" }} , 
 	{ "name": "m_axi_gmem_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_gmem_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "ARBURST" }} , 
 	{ "name": "m_axi_gmem_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_gmem_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_gmem_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "ARPROT" }} , 
 	{ "name": "m_axi_gmem_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARQOS" }} , 
 	{ "name": "m_axi_gmem_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARREGION" }} , 
 	{ "name": "m_axi_gmem_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARUSER" }} , 
 	{ "name": "m_axi_gmem_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RVALID" }} , 
 	{ "name": "m_axi_gmem_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RREADY" }} , 
 	{ "name": "m_axi_gmem_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "RDATA" }} , 
 	{ "name": "m_axi_gmem_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RLAST" }} , 
 	{ "name": "m_axi_gmem_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RID" }} , 
 	{ "name": "m_axi_gmem_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RUSER" }} , 
 	{ "name": "m_axi_gmem_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "RRESP" }} , 
 	{ "name": "m_axi_gmem_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BVALID" }} , 
 	{ "name": "m_axi_gmem_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BREADY" }} , 
 	{ "name": "m_axi_gmem_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "BRESP" }} , 
 	{ "name": "m_axi_gmem_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BID" }} , 
 	{ "name": "m_axi_gmem_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BUSER" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "6", "7"],
		"CDFG" : "DigitRec",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state37", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_knn_vote_fu_272"}],
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "training_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "testing_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "results_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.DigitRec_control_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.DigitRec_gmem_m_axi_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.knn_set_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_knn_vote_fu_272", "Parent" : "0", "Child" : ["5"],
		"CDFG" : "knn_vote",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "knn_set_V", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_knn_vote_fu_272.score_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_update_knn_fu_277", "Parent" : "0",
		"CDFG" : "update_knn",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "test_inst_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "train_inst_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "min_distances_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "min_distances_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.DigitRec_mac_muladd_4ns_12ns_11ns_15_1_U7", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	DigitRec {
		gmem {Type IO LastRead 24 FirstWrite 23}
		training_data_V {Type I LastRead 0 FirstWrite -1}
		testing_data_V {Type I LastRead 0 FirstWrite -1}
		results_V {Type I LastRead 0 FirstWrite -1}}
	knn_vote {
		knn_set_V {Type IO LastRead 17 FirstWrite 18}}
	update_knn {
		test_inst_V {Type I LastRead 2 FirstWrite -1}
		train_inst_V {Type I LastRead 2 FirstWrite -1}
		min_distances_V {Type IO LastRead 3 FirstWrite 3}
		min_distances_V_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "12985921", "Max" : "12985921"}
	, {"Name" : "Interval", "Min" : "12985922", "Max" : "12985922"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	gmem { m_axi {  { m_axi_gmem_AWVALID VALID 1 1 }  { m_axi_gmem_AWREADY READY 0 1 }  { m_axi_gmem_AWADDR ADDR 1 64 }  { m_axi_gmem_AWID ID 1 1 }  { m_axi_gmem_AWLEN LEN 1 8 }  { m_axi_gmem_AWSIZE SIZE 1 3 }  { m_axi_gmem_AWBURST BURST 1 2 }  { m_axi_gmem_AWLOCK LOCK 1 2 }  { m_axi_gmem_AWCACHE CACHE 1 4 }  { m_axi_gmem_AWPROT PROT 1 3 }  { m_axi_gmem_AWQOS QOS 1 4 }  { m_axi_gmem_AWREGION REGION 1 4 }  { m_axi_gmem_AWUSER USER 1 1 }  { m_axi_gmem_WVALID VALID 1 1 }  { m_axi_gmem_WREADY READY 0 1 }  { m_axi_gmem_WDATA DATA 1 64 }  { m_axi_gmem_WSTRB STRB 1 8 }  { m_axi_gmem_WLAST LAST 1 1 }  { m_axi_gmem_WID ID 1 1 }  { m_axi_gmem_WUSER USER 1 1 }  { m_axi_gmem_ARVALID VALID 1 1 }  { m_axi_gmem_ARREADY READY 0 1 }  { m_axi_gmem_ARADDR ADDR 1 64 }  { m_axi_gmem_ARID ID 1 1 }  { m_axi_gmem_ARLEN LEN 1 8 }  { m_axi_gmem_ARSIZE SIZE 1 3 }  { m_axi_gmem_ARBURST BURST 1 2 }  { m_axi_gmem_ARLOCK LOCK 1 2 }  { m_axi_gmem_ARCACHE CACHE 1 4 }  { m_axi_gmem_ARPROT PROT 1 3 }  { m_axi_gmem_ARQOS QOS 1 4 }  { m_axi_gmem_ARREGION REGION 1 4 }  { m_axi_gmem_ARUSER USER 1 1 }  { m_axi_gmem_RVALID VALID 0 1 }  { m_axi_gmem_RREADY READY 1 1 }  { m_axi_gmem_RDATA DATA 0 64 }  { m_axi_gmem_RLAST LAST 0 1 }  { m_axi_gmem_RID ID 0 1 }  { m_axi_gmem_RUSER USER 0 1 }  { m_axi_gmem_RRESP RESP 0 2 }  { m_axi_gmem_BVALID VALID 0 1 }  { m_axi_gmem_BREADY READY 1 1 }  { m_axi_gmem_BRESP RESP 0 2 }  { m_axi_gmem_BID ID 0 1 }  { m_axi_gmem_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ gmem { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ gmem 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ gmem 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
