function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Calc1.c:40c33"]=1;
    this.traceFlag["Calc1.c:47c33"]=1;
    this.traceFlag["Calc1.c:53c22"]=1;
    this.traceFlag["Calc1.c:78c33"]=1;
    this.traceFlag["Calc1.c:85c33"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Calc1.c:40"]=1;
    this.lineTraceFlag["Calc1.c:47"]=1;
    this.lineTraceFlag["Calc1.c:53"]=1;
    this.lineTraceFlag["Calc1.c:57"]=1;
    this.lineTraceFlag["Calc1.c:67"]=1;
    this.lineTraceFlag["Calc1.c:78"]=1;
    this.lineTraceFlag["Calc1.c:85"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
