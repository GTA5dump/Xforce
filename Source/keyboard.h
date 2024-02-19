#ifndef __KEYBOARD_H__
#define __KEYBOARD_H__

#pragma once

#define VK_NOTHING	       0x00		/*NULL*/
#define VK_KEY_0	       0x30                                          //('0')	
#define VK_KEY_1	       0x31                                         //('1')	
#define VK_KEY_2	       0x32                                        //('2')	
#define VK_KEY_3	       0x33                                       //('3')	
#define VK_KEY_4	       0x34                                      //('4')	
#define VK_KEY_5	       0x35                                     //('5')	
#define VK_KEY_6	       0x36                                    //('6')
#define VK_KEY_7	       0x37                                   //('7')	
#define VK_KEY_8	       0x38                                  //('8')	
#define VK_KEY_9	       0x39                                 //('9')	
#define VK_KEY_A	       0x41                                //('A')	
#define VK_KEY_B	       0x42                               //('B')	
#define VK_KEY_C	       0x43                              //('C')	
#define VK_KEY_D	       0x44                             //('D')	
#define VK_KEY_E	       0x45                            //('E')	
#define VK_KEY_F	       0x46                           //('F')	
#define VK_KEY_G	       0x47                          //('G')	
#define VK_KEY_H	       0x48                         //('H')	
#define VK_KEY_I	       0x49                        //('I')	
#define VK_KEY_J	       0x4A                       //('J')	
#define VK_KEY_K	       0x4B                      //('K')	
#define VK_KEY_L	       0x4C                     //('L')	
#define VK_KEY_M	       0x4D                    //('M')	
#define VK_KEY_N	       0x4E                   //('N')	
#define VK_KEY_O	       0x4F                  //('O')	
#define VK_KEY_P	       0x50                 //('P')	
#define VK_KEY_Q	       0x51                //('Q')	
#define VK_KEY_R	       0x52               //('R')	
#define VK_KEY_S	       0x53              //('S')	
#define VK_KEY_T	       0x54             //('T')	
#define VK_KEY_U	       0x55            //('U')	
#define VK_KEY_V	       0x56           //('V')	
#define VK_KEY_W	       0x57          //('W')	
#define VK_KEY_X	       0x58         //('X')	
#define VK_KEY_Y	       0x59        //('Y')	
#define VK_KEY_Z	       0x5A       //('Z')	
#define KEY_LEFT_CTRL      0x80
#define KEY_LEFT_SHIFT     0x81
#define KEY_LEFT_ALT       0x82
#define KEY_LEFT_GUI       0x83
#define KEY_RIGHT_CTRL     0x84
#define KEY_RIGHT_SHIFT    0x85
#define KEY_RIGHT_ALT      0x86
#define KEY_RIGHT_GUI      0x87
#define KEY_UP_ARROW       0xDA
#define KEY_DOWN_ARROW     0xD9
#define KEY_LEFT_ARROW     0xD8
#define KEY_RIGHT_ARROW    0xD7
#define KEY_BACKSPACE      0xB2
#define KEY_TAB            0xB3
#define KEY_RETURN         0xB0
#define KEY_ESC            0xB1                                    //ESC
#define KEY_INSERT         0xD1
#define KEY_DELETE         0xD4
#define KEY_PAGE_UP        0xD3
#define KEY_PAGE_DOWN      0xD6
#define KEY_HOME           0xD2                               //HOME
#define KEY_END            0xD5                              //END
#define KEY_CAPS_LOCK      0xC1                             //CAPS Lock
#define KEY_F1             0xC2                            //F1
#define KEY_F2             0xC3                           //F2
#define KEY_F3             0xC4                          //F3
#define KEY_F4             0xC5                         //F4
#define KEY_F5             0xC6                        //F5
#define KEY_F6             0xC7                       //F6
#define KEY_F7             0xC8                      //F7
#define KEY_F8             0xC9                     //F8
#define KEY_F9             0xCA                    //F9
#define KEY_F10            0xCB                   //F10
#define KEY_F11            0xCC		             //F11
#define KEY_F12            0xCD                 //F12
#define KEY_F13            0xF0                //F13
#define KEY_F14            0xF1               //F14
#define KEY_F15            0xF2              //F15
#define KEY_F16            0xF3		        //F16
#define KEY_F17            0xF4            //F17
#define KEY_F18            0xF5           //F18
#define KEY_F19            0xF6          //F19
#define KEY_F20            0xF7         //F20
#define KEY_F21            0xF8        //F21
#define KEY_F22            0xF9       //F22
#define KEY_F23            0xFA      //F23
#define KEY_F24            0xFB     //F28
#define VK_SPACE           0X20    //SPACE
#define VK_NUMPAD9         0x69	  //NumPad9
#define VK_NUMPAD3         0X63  //NumPad3

#define IsKeyPressed(key) GetAsyncKeyState(key) & 0x8000

// parameters are the same as with aru's ScriptHook for IV
void OnKeyboardMessage(DWORD key, WORD repeats, BYTE scanCode, BOOL isExtended, BOOL isWithAlt, BOOL wasDownBefore, BOOL isUpNow);
bool KeyDown(DWORD key);
bool KeyJustUp(DWORD key, bool exclusive = true);
bool KeyPressedOnce(bool& bIsPressed, DWORD vk);
void ResetKeyState(DWORD key);

enum navsound {
	NAV_OPEN,
	NAV_CLOSED,
	NAV_SELECT,
	NAV_CANCEL,
	NAV_UP_DOWN,
	NAV_LEFT_RIGHT,
};

void menu_beep(int snd);
void get_button_state(bool *a, bool *b, bool *up, bool *down, bool *l, bool *r);

bool trainer_switch_pressed();
void reset_trainer_switch();
void setGameInputToEnabled(bool enabled, bool force = false);

#endif // __KEYBOARD_H__