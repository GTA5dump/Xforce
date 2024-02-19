#pragma once

#pragma warning (disable: 4091)
extern enum SubMenus;

typedef struct VECTOR2 {
	float x, y;
};
typedef struct VECTOR2_2 {
	float w, h;
};
typedef struct RGBAF {
	int r, g, b, a, f;
};
typedef struct RGBA {
	int r, g, b, a;
};
typedef struct RGB {
	int r, g, b;
};

extern enum SubMenus;

namespace Menu {
	namespace Drawing {
		void Text(const char* text, RGBAF rgbaf, VECTOR2 position, VECTOR2_2 size, bool center);
		void Rect(RGBA rgba, VECTOR2 position, VECTOR2_2 size);
		void Spriter(std::string Streamedtexture, std::string textureName, float x, float y, float width, float height, float rotation, int r, int g, int b, int a);
		void drawGlare(float X, float Y, float width, float height, int r, int g, int b);
	}
	namespace Settings {
		extern bool selectPressed;
		extern bool leftPressed;
		extern bool rightPressed;

		extern int maxVisOptions;
		extern int currentOption;
		extern int optionCount;
		
		extern SubMenus currentMenu;
		extern int menuLevel;
		extern int optionsArray[1000];
		extern SubMenus menusArray[1000];

		extern float menuX;
		extern RGBAF titleText;
		extern RGBAF breakText;
		extern RGBA titleRect;
		extern RGBA MainTitle1Rect;
		extern RGBA MainTitleRect;
		extern RGBAF optionText;
		extern RGBAF count;
		extern RGBA line;
		extern RGBA optionRect;
		extern RGBA scroller;
		extern RGBA MainTitleRect;

		extern int keyPressPreviousTick2;
		extern int keyPressDelay3;
		extern int keyPressPreviousTick3;
		extern int keyPressDelay2;
		extern int keyPressDelay;
		extern int keyPressPreviousTick;
		extern int openKey;
		extern int backKey;
		extern int upKey;
		extern int downKey;
		extern int leftKey;
		extern int rightKey;
		extern int selectKey;
	}
	namespace MenuLevelHandler {
		void MoveMenu(SubMenus menu);
		void BackMenu();
	}
	namespace Checks {
		void Keys();
	}
	namespace Tools {
		const char* StringToChar(std::string string);
	}
	namespace Files {
		void WriteStringToIni(std::string string, std::string file, std::string app, std::string key);
		std::string ReadStringFromIni(std::string file, std::string app, std::string key);
		void WriteIntToIni(int intValue, std::string file, std::string app, std::string key);
		int ReadIntFromIni(std::string file, std::string app, std::string key);
		void WriteFloatToIni(float floatValue, std::string file, std::string app, std::string key);
		float ReadFloatFromIni(std::string file, std::string app, std::string key);
		void WriteBoolToIni(bool b00l, std::string file, std::string app, std::string key);
		bool ReadBoolFromIni(std::string file, std::string app, std::string key);
	}
	//Title Options
	void MainTitle(const char * title);
	void OptionsTitle(const char * title);
	void MainTitle1(const char* title);
	void editorTitle(const char * title);
	void drawGlare(float X, float Y, float width, float height, int r, int g, int b);
	void MoneyOptionsTitle(const char * title);
	void VehicleSpawnTitle(const char * title);
	void VehicleOptionsTitle(const char * title);
	void AmmoOptionsTitle(const char * title);
	//Other
	bool Break(const char* option);
	void AddSmallTitle(char* text);
	void AddSmallInfo(char* text, short line);
	void AddSmallTitle2(char* text);
	void AddSmallInfo2(char* text, short line);
	void AddSmallTitle3(char* text);
	void AddSmallInfo3(char* text, short line);
	void Title(const char* title);
	bool Option(const char* option);
	bool Option(const char* option, std::function<void()> function);
	bool MenuOption(const char* option, SubMenus newSub);
	bool MenuOption(const char* option, SubMenus newSub, std::function<void()> function);
	bool Toggle(const char* option, bool& b00l);
	bool Toggle(const char* option, bool& b00l, std::function<void()> function);
	bool Int(const char* option, int& _int, int min, int max);
	bool Int(const char* option, int& _int, int min, int max, int step);
	bool Int(const char* option, int& _int, int min, int max, std::function<void()> function);
	bool Int(const char* option, int& _int, int min, int max, int step, std::function<void()> function);
	bool Float(const char* option, float& _float, int min, int max);
	bool Float(const char* option, float& _float, int min, int max, int step);
	bool Float(const char* option, float& _float, int min, int max, std::function<void()> function);
	bool Float(const char* option, float& _float, int min, int max, int step, std::function<void()> function);
	bool IntVector(const char* option, std::vector<int> Vector, int& position);
	bool IntVector(const char* option, std::vector<int> Vector, int& position, std::function<void()> function);
	bool FloatVector(const char* option, std::vector<float> Vector, int& position);
	bool FloatVector(const char* option, std::vector<float> Vector, int& position, std::function<void()> function);
	bool StringVector(const char* option, std::vector<std::string> Vector, int& position);
	bool StringVector(const char* option, std::vector<std::string> Vector, int& position, std::function<void()> function);
	bool StringVector(const char* option, std::vector<char*> Vector, int& position);
	bool StringVector(const char* option, std::vector<char*> Vector, int& position, std::function<void()> function);
	bool Teleport(const char* option, Vector3 coords);
	bool Teleport(const char* option, Vector3 coords, std::function<void()> function);
	void End();
}