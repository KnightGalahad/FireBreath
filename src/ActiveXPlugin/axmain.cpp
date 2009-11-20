#include "Win/win_common.h"
#include "resource.h"
#include "axmain.h"
#include "dlldatax.h"

CFireBreathWinModule::CFireBreathWinModule()
{
    // Takes place during DLLMain, before static things are initialized
}

class AxIdMapInit
{
public:
    AxIdMapInit()
    {
        AxIdMap.setIdForValue(0, "value");
        AxIdMap.setIdForValue(-3, "propertyput");
        AxIdMap.setIdForValue(-4, "newenum");
        AxIdMap.setIdForValue(-5, "evaluate");
        AxIdMap.setIdForValue(-6, "constructor");
        AxIdMap.setIdForValue(-7, "destructor");
        AxIdMap.setIdForValue(-8, "collect");
        AxIdMap.setIdForValue(-500, "autosize");
        AxIdMap.setIdForValue(-501, "backcolor");
        AxIdMap.setIdForValue(-502, "backstyle");
        AxIdMap.setIdForValue(-503, "bordercolor");
        AxIdMap.setIdForValue(-504, "borderstyle");
        AxIdMap.setIdForValue(-505, "borderwidth");
        AxIdMap.setIdForValue(-507, "drawmode");
        AxIdMap.setIdForValue(-508, "drawstyle");
        AxIdMap.setIdForValue(-509, "drawwidth");
        AxIdMap.setIdForValue(-510, "fillcolor");
        AxIdMap.setIdForValue(-511, "fillstyle");
        AxIdMap.setIdForValue(-512, "font");
        AxIdMap.setIdForValue(-513, "forecolor");
        AxIdMap.setIdForValue(-514, "enabled");
        AxIdMap.setIdForValue(-515, "hwnd");
        AxIdMap.setIdForValue(-516, "tabstop");
        AxIdMap.setIdForValue(-517, "text");
        AxIdMap.setIdForValue(-518, "caption");
        AxIdMap.setIdForValue(-519, "bordervisible");
        AxIdMap.setIdForValue(-520, "appearance");
        AxIdMap.setIdForValue(-521, "mousepointer");
        AxIdMap.setIdForValue(-522, "mouseicon");
        AxIdMap.setIdForValue(-523, "picture");
        AxIdMap.setIdForValue(-524, "valid");
        AxIdMap.setIdForValue(-525, "readystate");
        AxIdMap.setIdForValue(-526, "listindex");
        AxIdMap.setIdForValue(-527, "selected");
        AxIdMap.setIdForValue(-528, "list");
        AxIdMap.setIdForValue(-529, "column");
        AxIdMap.setIdForValue(-531, "listcount");
        AxIdMap.setIdForValue(-532, "multiselect");
        AxIdMap.setIdForValue(-533, "maxlength");
        AxIdMap.setIdForValue(-534, "passwordchar");
        AxIdMap.setIdForValue(-535, "scrollbars");
        AxIdMap.setIdForValue(-536, "wordwrap");
        AxIdMap.setIdForValue(-537, "multiline");
        AxIdMap.setIdForValue(-538, "numberofrows");
        AxIdMap.setIdForValue(-539, "numberofcolumns");
        AxIdMap.setIdForValue(-540, "displaystyle");
        AxIdMap.setIdForValue(-541, "groupname");
        AxIdMap.setIdForValue(-542, "imemode");
        AxIdMap.setIdForValue(-543, "accelerator");
        AxIdMap.setIdForValue(-544, "enterkeybehavior");
        AxIdMap.setIdForValue(-545, "tabkeybehavior");
        AxIdMap.setIdForValue(-546, "seltext");
        AxIdMap.setIdForValue(-547, "selstart");
        AxIdMap.setIdForValue(-548, "sellength");

        AxIdMap.setIdForValue(-550, "refresh");
        AxIdMap.setIdForValue(-551, "doclick");
        AxIdMap.setIdForValue(-552, "aboutbox");
        AxIdMap.setIdForValue(-553, "additem");
        AxIdMap.setIdForValue(-554, "clear");
        AxIdMap.setIdForValue(-555, "removeitem");
        AxIdMap.setIdForValue(-600, "click");
        AxIdMap.setIdForValue(-601, "dblclick");
        AxIdMap.setIdForValue(-602, "keydown");
        AxIdMap.setIdForValue(-603, "keypress");
        AxIdMap.setIdForValue(-604, "keyup");
        AxIdMap.setIdForValue(-605, "mousedown");
        AxIdMap.setIdForValue(-606, "mousemove");
        AxIdMap.setIdForValue(-607, "mouseup");
        AxIdMap.setIdForValue(-608, "errorevent");
        AxIdMap.setIdForValue(-609, "readystatechange");
        AxIdMap.setIdForValue(-610, "click_value");
        AxIdMap.setIdForValue(-611, "righttoleft");
        AxIdMap.setIdForValue(-612, "toptobottom");
        AxIdMap.setIdForValue(-613, "this");
        AxIdMap.setIdForValue(-701, "ambient_backcolor");
        AxIdMap.setIdForValue(-702, "ambient_displayname");
        AxIdMap.setIdForValue(-703, "ambient_font");
        AxIdMap.setIdForValue(-704, "ambient_forecolor");
        AxIdMap.setIdForValue(-705, "ambient_localeid");
        AxIdMap.setIdForValue(-706, "ambient_messagereflect");
        AxIdMap.setIdForValue(-707, "ambient_scaleunits");
        AxIdMap.setIdForValue(-708, "ambient_textalign");
        AxIdMap.setIdForValue(-709, "ambient_usermode");
        AxIdMap.setIdForValue(-710, "ambient_uidead");
        AxIdMap.setIdForValue(-711, "ambient_showgrabhandles");
        AxIdMap.setIdForValue(-712, "ambient_showhatching");
        AxIdMap.setIdForValue(-713, "ambient_displayasdefault");
        AxIdMap.setIdForValue(-714, "ambient_supportsmnemonics");
        AxIdMap.setIdForValue(-715, "ambient_autoclip");
        AxIdMap.setIdForValue(-716, "ambient_appearance");
        AxIdMap.setIdForValue(-725, "ambient_codepage");
        AxIdMap.setIdForValue(-726, "ambient_palette");
        AxIdMap.setIdForValue(-727, "ambient_charsetidforvalue");
        AxIdMap.setIdForValue(-728, "ambient_transferpriority");
        AxIdMap.setIdForValue(-732, "ambient_righttoleft");
        AxIdMap.setIdForValue(-733, "ambient_toptobottom");
        AxIdMap.setIdForValue(-800, "name");
        AxIdMap.setIdForValue(-801, "delete");
        AxIdMap.setIdForValue(-802, "object");
        AxIdMap.setIdForValue(-803, "parent");
        AxIdMap.setIdForValue(-5500, "windowobject");
        AxIdMap.setIdForValue(-5506, "locationobject");
        AxIdMap.setIdForValue(-5507, "historyobject");
        AxIdMap.setIdForValue(-5508, "navigatorobject");
        AxIdMap.setIdForValue(-5511, "securityctx");
        AxIdMap.setIdForValue(-5512, "ambient_dlcontrol");
        AxIdMap.setIdForValue(-5513, "ambient_useragent");
        AxIdMap.setIdForValue(-5514, "securitydomain");
    }
};

CFireBreathWinModule _AtlModule;

FB::TypeIDMap<DISPID> AxIdMap(100);
AxIdMapInit __AxIdInitClassDummy;