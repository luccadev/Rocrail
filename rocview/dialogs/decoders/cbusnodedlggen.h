///////////////////////////////////////////////////////////////////////////// C++ code generated with wxFormBuilder (version Sep 12 2010)// http://www.wxformbuilder.org///// PLEASE DO "NOT" EDIT THIS FILE!///////////////////////////////////////////////////////////////////////////#ifndef __cbusnodedlggen__#define __cbusnodedlggen__#include <wx/string.h>#include <wx/stattext.h>#include <wx/gdicmn.h>#include <wx/font.h>#include <wx/colour.h>#include <wx/settings.h>#include <wx/textctrl.h>#include <wx/sizer.h>#include <wx/spinctrl.h>#include <wx/button.h>#include <wx/panel.h>#include <wx/bitmap.h>#include <wx/image.h>#include <wx/icon.h>#include <wx/listbox.h>#include <wx/checkbox.h>#include <wx/statline.h>#include <wx/radiobut.h>#include <wx/radiobox.h>#include <wx/slider.h>#include <wx/statbox.h>#include <wx/notebook.h>#include <wx/dialog.h>///////////////////////////////////////////////////////////////////////////#define wxID_CBUSNODE_BOOK 1000#define wxID_CBUSNODE_NUMBER 1001#define wxID_CBUSNODE_INDEX 1002#define wxID_CBUS_VAR 1003#define wxID_CBUS_EVENTSPANEL 1004#define wxID_CBUS_NODEFIRMWAREPANEL 1005////////////////////////////////////////////////////////////////////////////////// Class cbusnodedlggen///////////////////////////////////////////////////////////////////////////////class cbusnodedlggen : public wxDialog {	private:		protected:		wxNotebook* m_NoteBook;		wxPanel* m_NodeNumberPanel;		wxStaticText* m_labIID;		wxTextCtrl* m_IID;		wxStaticText* m_labNodeType;		wxTextCtrl* m_NodeType;		wxStaticText* m_labVersion;		wxTextCtrl* m_Version;		wxStaticText* m_labManu;		wxSpinCtrl* m_NodeManuNr;		wxStaticText* m_labModID;		wxSpinCtrl* m_NodeTypeNr;		wxStaticText* m_labNumber;		wxSpinCtrl* m_NodeNumber;		wxButton* m_SetNodeNumber;		wxPanel* m_IndexPanel;		wxListBox* m_IndexList;		wxButton* m_IndexDelete;		wxButton* m_QueryNN;		wxPanel* m_VarPanel;		wxListBox* m_VarList;		wxStaticText* m_labVarIndex;		wxStaticText* m_labVarValue;		wxSpinCtrl* m_VarIndex;		wxSpinCtrl* m_VarValue;		wxCheckBox* m_VarBit7;		wxCheckBox* m_VarBit6;		wxCheckBox* m_VarBit5;		wxCheckBox* m_VarBit4;		wxCheckBox* m_VarBit3;		wxCheckBox* m_VarBit2;		wxCheckBox* m_VarBit1;		wxCheckBox* m_VarBit0;		wxButton* m_VarGet;		wxButton* m_VarSet;		wxPanel* m_EventsPanel;		wxListBox* m_EventList;		wxStaticText* m_labEventNode;		wxStaticText* m_labEventAddr;		wxStaticText* m_labEventIndex;		wxStaticText* m_labEventVar;		wxSpinCtrl* m_EventNodeNr;		wxSpinCtrl* m_EventAddress;		wxSpinCtrl* m_EventIndex;		wxSpinCtrl* m_EventVar;		wxButton* m_EvtGetVar;		wxCheckBox* m_EVBit7;		wxCheckBox* m_EVBit6;		wxCheckBox* m_EVBit5;		wxCheckBox* m_EVBit4;		wxCheckBox* m_EVBit3;		wxCheckBox* m_EVBit2;		wxCheckBox* m_EVBit1;		wxCheckBox* m_EVBit0;		wxButton* m_EventGetAll;		wxButton* m_EventAdd;		wxButton* m_EventDelete;		wxButton* m_EvtClearAll;		wxButton* m_EvtLearn;		wxButton* m_EvtUnlearn;		wxPanel* m_FirmwarePanel;		wxButton* m_HexFile;		wxTextCtrl* m_HEXFileName;		wxButton* m_HEXFileSend;		wxTextCtrl* m_HEXFileText;		wxStaticLine* m_staticline1;		wxButton* m_BootMode;		wxButton* m_ResetBoot;		wxPanel* m_CANGC2Panel;		wxStaticText* m_lab1GC2Port;		wxStaticText* m_lab1GC2EvtNN;		wxStaticText* m_lab1GC2EvtAddr;		wxStaticText* m_Lab1GC2Input;		wxStaticText* m_lab1GC2Sensor;		wxStaticText* m_lab1GC2Switch;		wxStaticText* m_lab1GC2Pulse;		wxStaticText* m_labIR;		wxStaticText* m_lab1C2;		wxStaticText* m_lab1GC2Test;		wxStaticText* m_labGC2Port1;		wxSpinCtrl* m_GC2EvtNN1;		wxSpinCtrl* m_GC2EvtAddr1;		wxRadioButton* m_GC2Input1;		wxRadioButton* m_GC2Block1;		wxRadioButton* m_GC2Switch1;		wxRadioButton* m_GC2Pulse1;		wxRadioButton* m_GC2IR1;		wxCheckBox* m_GC2c21;		wxButton* m_GC2Test1;		wxStaticText* m_labGC2Port2;		wxSpinCtrl* m_GC2EvtNN2;		wxSpinCtrl* m_GC2EvtAddr2;		wxRadioButton* m_GC2Input2;		wxRadioButton* m_GC2Block2;		wxRadioButton* m_GC2Switch2;		wxRadioButton* m_GC2Pulse2;		wxRadioButton* m_GC2IR2;		wxCheckBox* m_GC2c22;		wxButton* m_GC2Test2;		wxStaticText* m_labGC2Port3;		wxSpinCtrl* m_GC2EvtNN3;		wxSpinCtrl* m_GC2EvtAddr3;		wxRadioButton* m_GC2Input3;		wxRadioButton* m_GC2Block3;		wxRadioButton* m_GC2Switch3;		wxRadioButton* m_GC2Pulse3;		wxRadioButton* m_GC2IR3;		wxCheckBox* m_GC2c23;		wxButton* m_GC2Test3;		wxStaticText* m_labGC2Port4;		wxSpinCtrl* m_GC2EvtNN4;		wxSpinCtrl* m_GC2EvtAddr4;		wxRadioButton* m_GC2Input4;		wxRadioButton* m_GC2Block4;		wxRadioButton* m_GC2Switch4;		wxRadioButton* m_GC2Pulse4;		wxRadioButton* m_GC2IR4;		wxCheckBox* m_GC2c24;		wxButton* m_GC2Test4;		wxStaticText* m_labGC2Port5;		wxSpinCtrl* m_GC2EvtNN5;		wxSpinCtrl* m_GC2EvtAddr5;		wxRadioButton* m_GC2Input5;		wxRadioButton* m_GC2Block5;		wxRadioButton* m_GC2Switch5;		wxRadioButton* m_GC2Pulse5;		wxRadioButton* m_GC2IR5;		wxCheckBox* m_GC2c25;		wxButton* m_GC2Test5;		wxStaticText* m_labGC2Port6;		wxSpinCtrl* m_GC2EvtNN6;		wxSpinCtrl* m_GC2EvtAddr6;		wxRadioButton* m_GC2Input6;		wxRadioButton* m_GC2Block6;		wxRadioButton* m_GC2Switch6;		wxRadioButton* m_GC2Pulse6;		wxRadioButton* m_GC2IR6;		wxCheckBox* m_GC2c26;		wxButton* m_GC2Test6;		wxStaticText* m_labGC2Port7;		wxSpinCtrl* m_GC2EvtNN7;		wxSpinCtrl* m_GC2EvtAddr7;		wxRadioButton* m_GC2Input7;		wxRadioButton* m_GC2Block7;		wxRadioButton* m_GC2Switch7;		wxRadioButton* m_GC2Pulse7;		wxRadioButton* m_GC2IR7;		wxCheckBox* m_GC2c27;		wxButton* m_GC2Test7;		wxStaticText* m_labGC2Port8;		wxSpinCtrl* m_GC2EvtNN8;		wxSpinCtrl* m_GC2EvtAddr8;		wxRadioButton* m_GC2Input8;		wxRadioButton* m_GC2Block8;		wxRadioButton* m_GC2Switch8;		wxRadioButton* m_GC2Pulse8;		wxRadioButton* m_GC2IR8;		wxCheckBox* m_GC2c28;		wxButton* m_GC2Test8;		wxStaticLine* m_staticline2;		wxStaticText* m_lab2GC2Port;		wxStaticText* m_lab2GC2EvtNN;		wxStaticText* m_lab2GC2EvtAddr;		wxStaticText* m_Lab2GC2Input;		wxStaticText* m_lab2GC2Sensor;		wxStaticText* m_lab2GC2Switch;		wxStaticText* m_lab2GC2Pulse;		wxStaticText* m_lab2C2;		wxStaticText* m_lab2GC2Test;		wxStaticText* m_labGC2Port9;		wxSpinCtrl* m_GC2EvtNN9;		wxSpinCtrl* m_GC2EvtAddr9;		wxRadioButton* m_GC2Input9;		wxRadioButton* m_GC2Block9;		wxRadioButton* m_GC2Switch9;		wxRadioButton* m_GC2Pulse9;		wxCheckBox* m_GC2c29;		wxButton* m_GC2Test9;		wxStaticText* m_labGC2Port10;		wxSpinCtrl* m_GC2EvtNN10;		wxSpinCtrl* m_GC2EvtAddr10;		wxRadioButton* m_GC2Input10;		wxRadioButton* m_GC2Block10;		wxRadioButton* m_GC2Switch10;		wxRadioButton* m_GC2Pulse10;		wxCheckBox* m_GC2c210;		wxButton* m_GC2Test10;		wxStaticText* m_labGC2Port11;		wxSpinCtrl* m_GC2EvtNN11;		wxSpinCtrl* m_GC2EvtAddr11;		wxRadioButton* m_GC2Input11;		wxRadioButton* m_GC2Block11;		wxRadioButton* m_GC2Switch11;		wxRadioButton* m_GC2Pulse11;		wxCheckBox* m_GC2c211;		wxButton* m_GC2Test11;		wxStaticText* m_labGC2Port12;		wxSpinCtrl* m_GC2EvtNN12;		wxSpinCtrl* m_GC2EvtAddr12;		wxRadioButton* m_GC2Input12;		wxRadioButton* m_GC2Block12;		wxRadioButton* m_GC2Switch12;		wxRadioButton* m_GC2Pulse12;		wxCheckBox* m_GC2c212;		wxButton* m_GC2Test12;		wxStaticText* m_labGC2Port13;		wxSpinCtrl* m_GC2EvtNN13;		wxSpinCtrl* m_GC2EvtAddr13;		wxRadioButton* m_GC2Input13;		wxRadioButton* m_GC2Block13;		wxRadioButton* m_GC2Switch13;		wxRadioButton* m_GC2Pulse13;		wxCheckBox* m_GC2c213;		wxButton* m_GC2Test13;		wxStaticText* m_labGC2Port14;		wxSpinCtrl* m_GC2EvtNN14;		wxSpinCtrl* m_GC2EvtAddr14;		wxRadioButton* m_GC2Input14;		wxRadioButton* m_GC2Block14;		wxRadioButton* m_GC2Switch14;		wxRadioButton* m_GC2Pulse14;		wxCheckBox* m_GC2c214;		wxButton* m_GC2Test14;		wxStaticText* m_labGC2Port15;		wxSpinCtrl* m_GC2EvtNN15;		wxSpinCtrl* m_GC2EvtAddr15;		wxRadioButton* m_GC2Input15;		wxRadioButton* m_GC2Block15;		wxRadioButton* m_GC2Switch15;		wxRadioButton* m_GC2Pulse15;		wxCheckBox* m_GC2c215;		wxButton* m_GC2Test15;		wxStaticText* m_labGC2Port16;		wxSpinCtrl* m_GC2EvtNN16;		wxSpinCtrl* m_GC2EvtAddr16;		wxRadioButton* m_GC2Input16;		wxRadioButton* m_GC2Block16;		wxRadioButton* m_GC2Switch16;		wxRadioButton* m_GC2Pulse16;		wxCheckBox* m_GC2c216;		wxButton* m_GC2Test16;		wxButton* m_GC2GetAll;		wxButton* m_GC2SetAll;		wxCheckBox* m_GC2SaveOutput;		wxButton* m_GC2Set;		wxButton* m_GC2SoD;		wxCheckBox* m_GC2ShortEvents;		wxStaticText* m_labSOD;		wxSpinCtrl* m_GC2SOD;		wxCheckBox* m_GC2SODAll;		wxStaticText* m_labGC2CanID;		wxSpinCtrl* m_GC2CanID;		wxRadioBox* m_GC2PulseTime;		wxPanel* m_CANGC6Panel;		wxStaticText* m_labGC6Servo1Left;		wxStaticText* m_labGC6Servo1Right;		wxStaticText* m_labGC6Servo1Speed;		wxSlider* m_GC6Servo1LeftAng;		wxSlider* m_GC6Servo1RightAng;		wxSlider* m_GC6Servo1Speed;		wxStaticLine* m_staticline4;		wxCheckBox* m_GC6Servo1Relay;		wxCheckBox* m_GC6Servo1ExtFb;		wxStaticText* m_labGC6Servo1SwEvent;		wxStaticText* m_labGC6Servo1SwAddr;		wxSpinCtrl* m_GC6Servo1SwNN;		wxSpinCtrl* m_GC6Servo1SwEvent;		wxStaticText* m_labGC6SensorEvent;		wxSpinCtrl* m_GC6Servo1SensorEvent;		wxStaticText* m_labGC6Servo2Left;		wxStaticText* m_labGC6Servo2Right;		wxStaticText* m_labGC6Servo2Speed;		wxSlider* m_GC6Servo2LeftAng;		wxSlider* m_GC6Servo2RightAng;		wxSlider* m_GC6Servo2Speed;		wxStaticLine* m_staticline41;		wxCheckBox* m_GC6Servo2Relay;		wxCheckBox* m_GC6Servo2ExtFb;		wxStaticText* m_labGC6Servo2SwEvent;		wxStaticText* m_labGC6Servo2SwAddr;		wxSpinCtrl* m_GC6Servo2SwNN;		wxSpinCtrl* m_GC6Servo2SwEvent;		wxStaticText* m_labGC6Servo2FbEvent;		wxSpinCtrl* m_GC6Servo2FbEvent;		wxStaticText* m_labGC6Servo3Left;		wxStaticText* m_labGC6Servo3Right;		wxStaticText* m_labGC6Servo3Speed;		wxSlider* m_GC6Servo3LeftAng;		wxSlider* m_GC6Servo3RightAng;		wxSlider* m_GC6Servo3Speed;		wxStaticLine* m_staticline42;		wxCheckBox* m_GC6Servo3Relay;		wxCheckBox* m_GC6Servo3ExtFb;		wxStaticText* m_labGC6Servo3SwEvent;		wxStaticText* m_labGC6Servo3SwAddr;		wxSpinCtrl* m_GC6Servo3SwNN;		wxSpinCtrl* m_GC6Servo3SwEvent;		wxStaticText* m_labGC6Servo3FbEvent;		wxSpinCtrl* m_GC6Servo3FbEvent;		wxStaticText* m_labGC6Servo4Left;		wxStaticText* m_labGC6Servo4Right;		wxStaticText* m_labGC6Servo4Speed;		wxSlider* m_GC6Servo4LeftAng;		wxSlider* m_GC6Servo4RightAng;		wxSlider* m_GC6Servo4Speed;		wxStaticLine* m_staticline43;		wxCheckBox* m_GC6Servo4Relay;		wxCheckBox* m_GC6Servo4ExtFb;		wxStaticText* m_labGC6Servo4SwEvent;		wxStaticText* m_labGC6Servo4SwAddr;		wxSpinCtrl* m_GC6Servo4SwNN;		wxSpinCtrl* m_GC6Servo4SwEvent;		wxStaticText* m_labGC6Servo4FbEvent;		wxSpinCtrl* m_GC6Servo1Servo4FbEvent;		wxButton* m_GC6GetAll;		wxButton* m_GC6SetAll;		wxStaticLine* m_staticline7;		wxStaticText* m_labGC6SOD;		wxSpinCtrl* m_GC6SOD;		wxCheckBox* m_GC6ShortEvents;		wxCheckBox* m_GC6SaveServoPos;		wxPanel* m_CANGC7Panel;		wxCheckBox* m_GC7ShowDate;		wxCheckBox* m_GC7ShowTemp;		wxCheckBox* m_GC7PosDisplay;		wxSlider* m_GC7IntensitySlider;		wxStaticText* m_GC7CANID;		wxSpinCtrl* m_GC7CanID;		wxButton* m_GC7SetCanID;		wxButton* m_GC7GetAll;		wxStdDialogButtonSizer* m_stdButton;		wxButton* m_stdButtonOK;		wxButton* m_stdButtonCancel;				// Virtual event handlers, overide them in your derived class		virtual void onSetNodeNumber( wxCommandEvent& event ) { event.Skip(); }		virtual void onIndexSelect( wxCommandEvent& event ) { event.Skip(); }		virtual void onIndexDelete( wxCommandEvent& event ) { event.Skip(); }		virtual void onQuery( wxCommandEvent& event ) { event.Skip(); }		virtual void onVarSelect( wxCommandEvent& event ) { event.Skip(); }		virtual void onVarValue( wxSpinEvent& event ) { event.Skip(); }		virtual void onVarValueText( wxCommandEvent& event ) { event.Skip(); }		virtual void onVarBit( wxCommandEvent& event ) { event.Skip(); }		virtual void onVarGet( wxCommandEvent& event ) { event.Skip(); }		virtual void onVarSet( wxCommandEvent& event ) { event.Skip(); }		virtual void onEventSelect( wxCommandEvent& event ) { event.Skip(); }		virtual void onEV( wxSpinEvent& event ) { event.Skip(); }		virtual void onEVText( wxCommandEvent& event ) { event.Skip(); }		virtual void onEvtGetVar( wxCommandEvent& event ) { event.Skip(); }		virtual void onEVBit( wxCommandEvent& event ) { event.Skip(); }		virtual void onEventGetAll( wxCommandEvent& event ) { event.Skip(); }		virtual void onEventAdd( wxCommandEvent& event ) { event.Skip(); }		virtual void onEventDelete( wxCommandEvent& event ) { event.Skip(); }		virtual void onEvtClearAll( wxCommandEvent& event ) { event.Skip(); }		virtual void onLearn( wxCommandEvent& event ) { event.Skip(); }		virtual void onUnlearn( wxCommandEvent& event ) { event.Skip(); }		virtual void onHexFile( wxCommandEvent& event ) { event.Skip(); }		virtual void onHEXFileSend( wxCommandEvent& event ) { event.Skip(); }		virtual void onBootmode( wxCommandEvent& event ) { event.Skip(); }		virtual void onResetBoot( wxCommandEvent& event ) { event.Skip(); }		virtual void onGC2Test( wxCommandEvent& event ) { event.Skip(); }		virtual void onGC2GetAll( wxCommandEvent& event ) { event.Skip(); }		virtual void onGC2SetAll( wxCommandEvent& event ) { event.Skip(); }		virtual void onGC2Set( wxCommandEvent& event ) { event.Skip(); }		virtual void onSoD( wxCommandEvent& event ) { event.Skip(); }		virtual void OnServoLeftAngle( wxScrollEvent& event ) { event.Skip(); }		virtual void OnServoRightAngle( wxScrollEvent& event ) { event.Skip(); }		virtual void OnServoSpeed( wxScrollEvent& event ) { event.Skip(); }		virtual void OnServoRelay( wxCommandEvent& event ) { event.Skip(); }		virtual void onGC6SwEvent( wxSpinEvent& event ) { event.Skip(); }		virtual void onGC6FbEvent( wxSpinEvent& event ) { event.Skip(); }		virtual void onGC6GetAll( wxCommandEvent& event ) { event.Skip(); }		virtual void onGC6SetAll( wxCommandEvent& event ) { event.Skip(); }		virtual void onGC7ShowDate( wxCommandEvent& event ) { event.Skip(); }		virtual void onGC7ShowTemp( wxCommandEvent& event ) { event.Skip(); }		virtual void onGC7PosDisplay( wxCommandEvent& event ) { event.Skip(); }		virtual void onGC7Intensity( wxScrollEvent& event ) { event.Skip(); }		virtual void onGC7SetCanID( wxCommandEvent& event ) { event.Skip(); }		virtual void onGC7GetAll( wxCommandEvent& event ) { event.Skip(); }		virtual void onCancel( wxCommandEvent& event ) { event.Skip(); }		virtual void onOK( wxCommandEvent& event ) { event.Skip(); }				public:				cbusnodedlggen( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("CBUS Node"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );		~cbusnodedlggen();	};#endif //__cbusnodedlggen__