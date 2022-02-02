function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["LogicalOperations.c:37c55"]=1;
    this.traceFlag["LogicalOperations.c:44c55"]=1;
    this.traceFlag["LogicalOperations.c:51c54"]=1;
    this.traceFlag["LogicalOperations.c:58c55"]=1;
    this.traceFlag["LogicalOperations.c:64c30"]=1;
    this.traceFlag["LogicalOperations.c:70c30"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["LogicalOperations.c:37"]=1;
    this.lineTraceFlag["LogicalOperations.c:44"]=1;
    this.lineTraceFlag["LogicalOperations.c:51"]=1;
    this.lineTraceFlag["LogicalOperations.c:58"]=1;
    this.lineTraceFlag["LogicalOperations.c:64"]=1;
    this.lineTraceFlag["LogicalOperations.c:70"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
