function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Lamp"};
	this.sidHashMap["Lamp"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Lamp:1"};
	this.sidHashMap["Lamp:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Lamp:1"};
	this.sidHashMap["Lamp:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Lamp"] = {sid: "Lamp:9"};
	this.sidHashMap["Lamp:9"] = {rtwname: "<Root>/Lamp"};
	this.rtwnameHashMap["<Root>/Lamp1"] = {sid: "Lamp:10"};
	this.sidHashMap["Lamp:10"] = {rtwname: "<Root>/Lamp1"};
	this.rtwnameHashMap["<Root>/Lamp2"] = {sid: "Lamp:11"};
	this.sidHashMap["Lamp:11"] = {rtwname: "<Root>/Lamp2"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Lamp:12"};
	this.sidHashMap["Lamp:12"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "Lamp:13"};
	this.sidHashMap["Lamp:13"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "Lamp:14"};
	this.sidHashMap["Lamp:14"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Lamp:1:1"};
	this.sidHashMap["Lamp:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "Lamp:1:3"};
	this.sidHashMap["Lamp:1:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "Lamp:1:4"};
	this.sidHashMap["Lamp:1:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:10"] = {sid: "Lamp:1:10"};
	this.sidHashMap["Lamp:1:10"] = {rtwname: "<S1>:10"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "Lamp:1:2"};
	this.sidHashMap["Lamp:1:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:8"] = {sid: "Lamp:1:8"};
	this.sidHashMap["Lamp:1:8"] = {rtwname: "<S1>:8"};
	this.rtwnameHashMap["<S1>:9"] = {sid: "Lamp:1:9"};
	this.sidHashMap["Lamp:1:9"] = {rtwname: "<S1>:9"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
