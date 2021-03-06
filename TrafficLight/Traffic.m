function varargout = Traffic(varargin)
% TRAFFIC MATLAB code for Traffic.fig
%      TRAFFIC, by itself, creates a new TRAFFIC or raises the existing
%      singleton*.
%
%      H = TRAFFIC returns the handle to a new TRAFFIC or the handle to
%      the existing singleton*.
%
%      TRAFFIC('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in TRAFFIC.M with the given input arguments.
%
%      TRAFFIC('Property','Value',...) creates a new TRAFFIC or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before Traffic_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to Traffic_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help Traffic

% Last Modified by GUIDE v2.5 28-Jan-2022 12:43:07

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @Traffic_OpeningFcn, ...
                   'gui_OutputFcn',  @Traffic_OutputFcn, ...
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


% --- Executes just before Traffic is made visible.
function Traffic_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to Traffic (see VARARGIN)
global A;
global B;
global Pcounter;
global Ccounter;
global CondCar;
global CondPeop;
CondCar = 0;
CondPeop = 0;
%%Pcounter  = 100;
%%Ccounter =  200;
A = imread('Cars.jpg');
B = imread('People.jpg');
axes(handles.axes1);
global a;
global mode;
global cond;
mode = 'Nan';
cond = 0;
a = arduino('COM3','UNO');
configurePin(a,'D13','DigitalOutput');

% Choose default command line output for Traffic
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes Traffic wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = Traffic_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in Start.
function Start_Callback(hObject, eventdata, handles)
% hObject    handle to Start (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global Pcounter;
global Ccounter;
global CondCar;
global CondPeop;
global A;
global B;
global a;
global mode;
global cond;
mode = get(handles.List,'SelectedObject');
mode = get(mode,'String');
cond = 5;
mode = get(handles.List,'SelectedObject');
mode = get(mode,'String');
    switch(mode)
        case 'Manual'
            %%counter = 200;
            cond = 1;
            set(handles.Car,'String','');
            set(handles.People,'String','');
        case 'Automatic'
            cond = 2;
        case 'Maintainance'
            cond = 3;
            writeDigitalPin(a,'D13',0);
            writeDigitalPin(a,'D12',0);
            writeDigitalPin(a,'D11',0);
            set(handles.Car,'String','');
            set(handles.People,'String','');
             CondCar = str2double(get(handles.CarC,'String'));
            if isnan(CondCar)
                CondCar = 2;
            end
            CondPeop= str2double(get(handles.PeoC,'String'));
            if isnan(CondPeop)
                CondPeop = 1;
            end
            Ccounter = CondCar;
            Pcounter = CondPeop;
            end
    if cond == 2
        if CondCar == 0 || Ccounter == 0
            Ccounter = 2;
            fprintf('ssssss');
        end
        if CondPeop ==0 || Pcounter == 0
            Pcounter = 1;
            fprintf('ssssss');            
        end
        car = 1;
        peop = 0; 
        while(cond == 2)
            writeDigitalPin(a,'D13',0);
            writeDigitalPin(a,'D12',0);
            writeDigitalPin(a,'D11',0);
            if car == 1 && peop == 0
                set(handles.Car,'String',Ccounter);
                imshow(A);
                pause(1);
                Ccounter = Ccounter - 1;
                fprintf('%d\n',Ccounter);
                if Ccounter == 0
                    car = 0;
                    peop = 1;
                    set(handles.Car,'String','');
                    Ccounter = CondCar;
                    if isnan(Ccounter) || Ccounter == 0
                        Ccounter = 2;
                    end
                end
            elseif car == 0 && peop == 1
                set(handles.People,'String',Pcounter);
                imshow(B);
                pause(1);
                Pcounter = Pcounter - 1;
                fprintf('%d\n',Pcounter);
                if Pcounter == 0
                    car = 1;
                    peop = 0;
                    set(handles.People,'String','');
                    Pcounter = CondPeop;
                    if isnan(Pcounter) || Pcounter == 0
                        Pcounter = 1;
                    end
                end
            end
        end    
    end



% --- Executes on button press in Stop.
function Stop_Callback(hObject, eventdata, handles)
% hObject    handle to Stop (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global cond;
global Ccounter;
global Pcounter;
global CondCar;
global CondPeop;
global a;
cond = 0;
writeDigitalPin(a,'D13',0);
writeDigitalPin(a,'D12',0);
writeDigitalPin(a,'D11',0);
set(handles.Car,'String','');
set(handles.People,'String','');
if cond == 3
    CondCar = str2double(get(handles.CarC,'String'));
    if isnan(CondCar)
        CondCar = 2;
    end
    CondPeop= str2double(get(handles.PeoC,'String'));
    if isnan(CondPeop)
        CondPeop = 1;
    end
    Ccounter = CondCar;
    Pcounter = CondPeop;
end



% --- Executes on button press in Green.
function Green_Callback(hObject, eventdata, handles)
% hObject    handle to Green (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global a;
global cond;
if (cond == 1)
    writeDigitalPin(a,'D13',1);
end


% --- Executes on button press in Red.
function Red_Callback(hObject, eventdata, handles)
% hObject    handle to Red (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global a;
global cond;
if (cond == 1)
    writeDigitalPin(a,'D12',1);
end



% --- Executes on button press in Yellow.
function Yellow_Callback(hObject, eventdata, handles)
% hObject    handle to Yellow (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global a;
global cond;
if (cond == 1)
    writeDigitalPin(a,'D11',1);
end

function List_CreateFcn(hObject, eventdata, handles)

 

function CarC_Callback(hObject, eventdata, handles)
% hObject    handle to CarC (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of CarC as text
%        str2double(get(hObject,'String')) returns contents of CarC as a double
global Ccounter;
global cond;
if (cond == 3)
    Ccounter = str2double(get(handles.CarC,'String'));
    if isnan(Ccounter)
    else
        set(handles.Car,'String',Ccounter);    
    end
end


% --- Executes during object creation, after setting all properties.
function CarC_CreateFcn(hObject, eventdata, handles)
% hObject    handle to CarC (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function PeoC_Callback(hObject, eventdata, handles)
% hObject    handle to PeoC (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of PeoC as text
% str2double(get(hObject,'String')) returns contents of PeoC as a double
global Pcounter;
global cond;
if(cond == 3)
    Pcounter = str2double(get(handles.PeoC,'String'));
    if isnan(Pcounter)
    else
        set(handles.People,'String',Pcounter);
    end
end


% --- Executes during object creation, after setting all properties.
function PeoC_CreateFcn(hObject, eventdata, handles)
% hObject    handle to PeoC (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton6.
function pushbutton6_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global a;
global cond;
if (cond == 1)
    writeDigitalPin(a,'D13',0);
end


% --- Executes on button press in pushbutton7.
function pushbutton7_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global a;
global cond;
if (cond == 1)
    writeDigitalPin(a,'D12',0);
end


% --- Executes on button press in pushbutton8.
function pushbutton8_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton8 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global a;
global cond;
if (cond == 1)
    writeDigitalPin(a,'D11',0);
end
