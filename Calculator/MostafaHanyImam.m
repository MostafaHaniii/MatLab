function varargout = MostafaHanyImam(varargin)
% MOSTAFAHANYIMAM MATLAB code for MostafaHanyImam.fig
%      MOSTAFAHANYIMAM, by itself, creates a new MOSTAFAHANYIMAM or raises the existing
%      singleton*.
%
%      H = MOSTAFAHANYIMAM returns the handle to a new MOSTAFAHANYIMAM or the handle to
%      the existing singleton*.
%
%      MOSTAFAHANYIMAM('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in MOSTAFAHANYIMAM.M with the given input arguments.
%
%      MOSTAFAHANYIMAM('Property','Value',...) creates a new MOSTAFAHANYIMAM or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before MostafaHanyImam_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to MostafaHanyImam_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help MostafaHanyImam

% Last Modified by GUIDE v2.5 20-Jan-2022 08:59:23

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @MostafaHanyImam_OpeningFcn, ...
                   'gui_OutputFcn',  @MostafaHanyImam_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before MostafaHanyImam is made visible.
function MostafaHanyImam_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to MostafaHanyImam (see VARARGIN)

% Choose default command line output for MostafaHanyImam
global Operator;
global V_op;
global Number1;
global Number2;
global x_axis;
global y_axis;

x_axis = [];
y_axis = [];

V_op = 0;

Number1=0;
Number2=0;

Operator = 0;

handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes MostafaHanyImam wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = MostafaHanyImam_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in Equal.
function Equal_Callback(hObject, eventdata, handles)
% hObject    handle to Equal (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global Number1;
global Number2;
global Operator;

Number1 = str2double(get(handles.Number1,'String'));
Number2 = str2double(get(handles.Number2,'String'));

if(isnan(Number1) || isnan(Number2))
    set(handles.Console,'String','Wrong Operands');
    set(handles.Result,'String','');
else 
    Number1 = str2double(get(handles.Number1,'String'));
    Number2 = str2double(get(handles.Number2,'String'));
    switch(Operator)
        case 0 
            set(handles.Console,'String','No Operation Selceted')
        case 1
            set(handles.Result,'String',Number1+Number2);
            set(handles.Console,'String','');
        case 2  
            set(handles.Result,'String',Number1-Number2);
            set(handles.Console,'String','');
        case 3
            if Number2 == 0
                set(handles.Console,'String','Cannot Divide by Zero');
            else
                set(handles.Result,'String',Number1/Number2);
                set(handles.Console,'String','');
            end
        case 4
            set(handles.Result,'String',Number1*Number2);
            set(handles.Console,'String','');
    end    
end







function Number2_Callback(hObject, eventdata, handles)
% hObject    handle to Number2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Number2 as text
%        str2double(get(hObject,'String')) returns contents of Number2 as a double


% --- Executes during object creation, after setting all properties.
function Number2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Number2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function Number1_Callback(hObject, eventdata, handles)
% hObject    handle to Number1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Number1 as text
%        str2double(get(hObject,'String')) returns contents of Number1 as a double


% --- Executes during object creation, after setting all properties.
function Number1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Number1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function Sign_Callback(hObject, eventdata, handles)
% hObject    handle to Sign (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Sign as text
%        str2double(get(hObject,'String')) returns contents of Sign as a double


% --- Executes during object creation, after setting all properties.
function Sign_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Sign (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in listbox1.
function listbox1_Callback(hObject, eventdata, handles)
% hObject    handle to listbox1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% Hints: contents = cellstr(get(hObject,'String')) returns listbox1 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from listbox1
global Operator;
Operator = get(handles.listbox1,'Value');
switch (Operator)
    case 1
        set(handles.Sign,'String','+');
    case 2
        set(handles.Sign,'String','-');
    case 3
        set(handles.Sign,'String','/');
    case 4 
        set(handles.Sign,'String','*');
end


% --- Executes during object creation, after setting all properties.
function listbox1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to listbox1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: listbox controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function Function_Callback(hObject, eventdata, handles)
% hObject    handle to Function (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Function as text
%        str2double(get(hObject,'String')) returns contents of Function as a double


% --- Executes during object creation, after setting all properties.
function Function_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Function (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in listbox2.
function listbox2_Callback(hObject, eventdata, handles)
% hObject    handle to listbox2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns listbox2 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from listbox2
global V_op;
V_op = get(handles.listbox2,'Value');
switch (V_op)
    case 0 
        set(handles.Console,'String','No Operation Selceted')
    case 1
        set(handles.V_OP,'String','+');
    case 2
        set(handles.V_OP,'String','-');
    case 3
        set(handles.V_OP,'String','/');
    case 4 
        set(handles.V_OP,'String','*');
end

% --- Executes during object creation, after setting all properties.
function listbox2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to listbox2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: listbox controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function Vector_X_Callback(hObject, eventdata, handles)
% hObject    handle to Vector_X (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Vector_X as text
%        str2double(get(hObject,'String')) returns contents of Vector_X as a double


% --- Executes during object creation, after setting all properties.
function Vector_X_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Vector_X (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function Vector_Y_Callback(hObject, eventdata, handles)
% hObject    handle to Vector_Y (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Vector_Y as text
%        str2double(get(hObject,'String')) returns contents of Vector_Y as a double


% --- Executes during object creation, after setting all properties.
function Vector_Y_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Vector_Y (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global x_axis;
global y_axis;
global V_op;



x_axis = str2num(get(handles.Vector_X,'String'));
y_axis = str2num(get(handles.Vector_Y,'String'));

fprintf('%d',V_op);
switch(V_op)
    case 0 
        set(handles.Console,'String','No Operation Selceted')
    case 1 
        set(handles.Vector_Result,'String',num2str(x_axis + y_axis));
    case 2
        set(handles.Vector_Result,'String',num2str(x_axis - y_axis));
    case 3
        set(handles.Vector_Result,'String',num2str(x_axis ./ y_axis));
    case 4
        set(handles.Vector_Result,'String',num2str(x_axis .* y_axis));
end




% --- Executes on button press in Clear.
function Clear_Callback(hObject, eventdata, handles)
% hObject    handle to Clear (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set(handles.Result,'String','');
set(handles.Number1,'String','');
set(handles.Number2,'String','');
set(handles.Console,'String','');
set(handles.Vector_X,'String','');
set(handles.Vector_Y,'String','');
set(handles.Vector_Result,'String','');
set(handles.Function,'String','');

% --- Executes on button press in radiobutton1.
function radiobutton1_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of radiobutton1


% --- Executes on button press in ENT.
function ENT_Callback(hObject, eventdata, handles)
% hObject    handle to ENT (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global x_axis;
global y_axis;

x_axis = str2num(get(handles.Vector_X,'String'));
y_axis = str2num(get(handles.Vector_Y,'String'));

draw = get(handles.DList,'SelectedObject');
Pdraw = get(draw,'String');

%%x_draw = get(x_axis,'String');
%%y_draw = get(y_axis,'String');
switch(Pdraw)
    case 'x-axis'
        plot(x_axis);
    case 'y-axis'
        plot(y_axis);
    case 'xy-axis'
        plot(x_axis,y_axis);
    case 'Equation'
        try
            y=get(handles.Function,'String');
            ezplot(y);
        catch
            fprintf('No Input Function\n');
            set(handles.Console,'String','No Input Function');
        end      
    case 'Sin'
        plot(sind(0:1:360));
    case 'Cos'
        plot(cosd(0:1:360));
    case 'Resultant'
        plot(str2num(get(handles.Vector_Result,'String')));
end


%%
% --- Executes on button press in DEL.
function DEL_Callback(hObject, eventdata, handles)
% hObject    handle to DEL (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
cla;


% --- Executes on button press in cos.
function cos_Callback(hObject, eventdata, handles)
% hObject    handle to cos (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of cos


% --- Executes on button press in x_axis.
function x_axis_Callback(hObject, eventdata, handles)
% hObject    handle to x_axis (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of x_axis


% --- Executes on button press in y_axis.
function y_axis_Callback(hObject, eventdata, handles)
% hObject    handle to y_axis (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of y_axis


% --- Executes on button press in Eqt.
function Eqt_Callback(hObject, eventdata, handles)
% hObject    handle to Eqt (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of Eqt


% --- Executes on button press in sin.
function sin_Callback(hObject, eventdata, handles)
% hObject    handle to sin (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of sin


% --- Executes on button press in Resultant.
function Resultant_Callback(hObject, eventdata, handles)
% hObject    handle to Resultant (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of Resultant
