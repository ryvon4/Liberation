#define TXU_GUI_GRID_WAbs		((safezoneW / safezoneH) min 1.2)
#define TXU_GUI_GRID_HAbs		(TXU_GUI_GRID_WAbs / 1.2)
#define TXU_GUI_GRID_W			(TXU_GUI_GRID_WAbs / 40)
#define TXU_GUI_GRID_H			(TXU_GUI_GRID_HAbs / 25)
#define TXU_GUI_GRID_X			(safezoneX)
#define TXU_GUI_GRID_Y			(safezoneY + safezoneH - TXUGUI_GRID_HAbs)

// Default text sizes
#define TXU_GUI_TEXT_SIZE_SMALL		(TXU_GUI_GRID_H * 0.8)
#define TXU_GUI_TEXT_SIZE_MEDIUM	(TXU_GUI_GRID_H * 1)
#define TXU_GUI_TEXT_SIZE_LARGE		(TXU_GUI_GRID_H * 1.2)

// Pixel grid
#define TXU_GUI_pixelScale	0.50
#define TXU_GRID_W (pixelW * pixelGrid * TXU_GUI_pixelScale)
#define TXU_GRID_H (pixelH * pixelGrid * TXU_GUI_pixelScale)


class TXU_GUI_RscButton
{
	deletable = 0;
	fade = 0;
	access = 0;
	idc = -1;
	//type = CT_BUTTON;
	type = 1;
	url = "";
	//style = ST_CENTER;
	style = 0x02;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	text = "";
	shadow = 2;
	font = "RobotoCondensed";
	//sizeEx = GUI_TEXT_SIZE_MEDIUM;
	sizeEx = TXU_GUI_TEXT_SIZE_MEDIUM;
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0,0,0,0.5};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorBackgroundActive[] = {0,0,0,1};
	colorFocused[] = {0,0,0,1};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,1};
	soundEnter[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.09,
		1
	};
	soundClick[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.09,
		1
	};
	soundEscape[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
};




class TXU_TS_INFOBUTTON1 : TXU_GUI_RscButton
{
	text = "Click to join Teamspeak";
	url="ts3server://ts3.7cav.us:9987?password=7thCavalry?addbookmark=7thCavalryGaming";
	w = 0.5;
	colorText[] = {0,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0.275,0.275,0.408,0.5};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorBackgroundActive[] = {0.275,0.275,0.408,1};
	colorFocused[] = {0,0,0,1};
	colorShadow[] = {1,0,1,0};
	colorBorder[] = {0,1,0,1};
	colorSelect[] = {0,1,0,1};
	soundSelect[] = {};
};

class TXU_TS_INFOBUTTON2 : TXU_TS_INFOBUTTON1
{
	text = "Join the 7th Cavalry";
	url= "https://7cav.us/enlist";
};

class TXU_TS_INFOBUTTON3 : TXU_TS_INFOBUTTON1
{
	text = "Vist our Website";
	url= "https://7cav.us";
};

class TXU_TS_INFOBUTTON4 : TXU_TS_INFOBUTTON1
{
	text = "Visit our Discord";
	url= "https://discord.7cav.us";
};