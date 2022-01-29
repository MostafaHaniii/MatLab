function varargout = POT(varargin)
% POT MATLAB code for POT.fig
%      POT, by itself, creates a new POT or raises the existing
%      singleton*.
%
%      H = POT returns the handle to a new POT or the handle to
%      the existing singleton*.
%
%      POT('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in POT.M with the given input arguments.
%
%      POT('Property','Value',...) creates a new POT or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before POT_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to POT_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help POT

% Last Modified by GUIDE v2.5 29-Jan-2022 21:11:16

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @POT_OpeningFcn, ...
                   'gui_OutputFcn',  @POT_OutputFcn, ...
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


% --- Executes just before POT is made visible.
function POT_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to POT (see VARARGIN)

% Choose default command line output for POT
handles.output = hObject;
global drawing;
global a;
drawing = 0;
a = arduino('COM3','UNO');
configurePin(a,'D13','DigitalOutput');
configurePin(a,'A0','AnalogInput');

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes POT wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = POT_OutputFcn(hObject, eventdata, handles) 
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
global a;
global cond;
global drawing;
cond =1;
NumberOfReadings = 200;
drawing = zeros(1,NumberOfReadings);
AllValues = 0;
%%fprintf("%d",drawing);
while(cond == 1)
   AllValues=0;
   for i = 1:NumberOfReadings 
   drawing(i) = readVoltage(a,'A0');
   fprintf("%f\n",drawing);
   pause(.1);
   plot(drawing);
   ylabel('Voltage');
   xlabel('Readings');
   if(cond ~= 1)
        break;
    end
   end
end


% --- Executes on button press in Stop.
function Stop_Callback(hObject, eventdata, handles)
% hObject    handle to Stop (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global cond;
cond = 2;
cla reset;


