function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Calc1.c:40c30"]=1;
    this.traceFlag["Calc1.c:47c30"]=1;
    this.traceFlag["Calc1.c:53c19"]=1;
    this.traceFlag["Calc1.c:79c30"]=1;
    this.traceFlag["Calc1.c:86c30"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Calc1.c:40"]=1;
    this.lineTraceFlag["Calc1.c:47"]=1;
    this.lineTraceFlag["Calc1.c:53"]=1;
    this.lineTraceFlag["Calc1.c:57"]=1;
    this.lineTraceFlag["Calc1.c:68"]=1;
    this.lineTraceFlag["Calc1.c:79"]=1;
    this.lineTraceFlag["Calc1.c:86"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
