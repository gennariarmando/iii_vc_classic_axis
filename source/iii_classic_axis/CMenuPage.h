#pragma once

enum eMenuScreen {
	MENU_PAGE_NONE = 0,
	MENU_PAGE_STATS = 1,
	MENU_PAGE_NEW_GAME = 2,
	MENU_PAGE_BRIEFS = 3,
	MENU_PAGE_MAP = 4,
	MENU_PAGE_SOUND_SETTINGS = 5,
	MENU_PAGE_GRAPHICS_SETTINGS = 6,
	MENU_PAGE_LANGUAGE_SETTINGS = 7,
	MENU_PAGE_CHOOSE_LOAD_SLOT = 8,
	MENU_PAGE_CHOOSE_DELETE_SLOT = 9,
	MENU_PAGE_NEW_GAME_RELOAD = 10,
	MENU_PAGE_LOAD_SLOT_CONFIRM = 11,
	MENU_PAGE_DELETE_SLOT_CONFIRM = 12,
	MENU_PAGE_13 = 13,
	MENU_PAGE_LOADING_IN_PROGRESS = 14,
	MENU_PAGE_DELETING_IN_PROGRESS = 15,
	MENU_PAGE_16 = 16,
	MENU_PAGE_DELETE_FAILED = 17,
	MENU_PAGE_DEBUG_MENU = 18,
	MENU_PAGE_MEMORY_CARD_1 = 19,
	MENU_PAGE_MEMORY_CARD_2 = 20,
	MENU_PAGE_MULTIPLAYER_MAIN = 21,
	MENU_PAGE_SAVE_FAILED_1 = 22,
	MENU_PAGE_SAVE_FAILED_2 = 23,
	MENU_PAGE_SAVE = 24,
	MENU_PAGE_NO_MEMORY_CARD = 25,
	MENU_PAGE_CHOOSE_SAVE_SLOT = 26,
	MENU_PAGE_SAVE_OVERWRITE_CONFIRM = 27,
	MENU_PAGE_MULTIPLAYER_MAP = 28,
	MENU_PAGE_MULTIPLAYER_CONNECTION = 29,
	MENU_PAGE_MULTIPLAYER_FIND_GAME = 30,
	MENU_PAGE_MULTIPLAYER_MODE = 31,
	MENU_PAGE_MULTIPLAYER_CREATE = 32,
	MENU_PAGE_MULTIPLAYER_START = 33,
	MENU_PAGE_SKIN_SELECT_OLD = 34,
	MENU_PAGE_CONTROLLER_PC = 35,
	MENU_PAGE_CONTROLLER_PC_OLD1 = 36,
	MENU_PAGE_CONTROLLER_PC_OLD2 = 37,
	MENU_PAGE_CONTROLLER_PC_OLD3 = 38,
	MENU_PAGE_CONTROLLER_PC_OLD4 = 39,
	MENU_PAGE_CONTROLLER_DEBUG = 40,
	MENU_PAGE_OPTIONS = 41,
	MENU_PAGE_EXIT = 42,
	MENU_PAGE_SAVING_IN_PROGRESS = 43,
	MENU_PAGE_SAVE_SUCCESSFUL = 44,
	MENU_PAGE_DELETING = 45,
	MENU_PAGE_DELETE_SUCCESS = 46,
	MENU_PAGE_SAVE_FAILED = 47,
	MENU_PAGE_LOAD_FAILED = 48,
	MENU_PAGE_LOAD_FAILED_2 = 49,
	MENU_PAGE_FILTER_GAME = 50,
	MENU_PAGE_START_MENU = 51,
	MENU_PAGE_PAUSE_MENU = 52,
	MENU_PAGE_CHOOSE_MODE = 53,
	MENU_PAGE_SKIN_SELECT = 54,
	MENU_PAGE_KEYBOARD_CONTROLS = 55,
	MENU_PAGE_MOUSE_CONTROLS = 56,
	MENU_PAGE_57 = 57,
	MENU_PAGE_58 = 58,
	NUM_MENUPAGE
};

struct CMenuScreen {
	unsigned __int8 m_aScreenName[8];
	int field_368;
	int field_372;
	int m_aParentMenu;
	int m_aStartingMenuEntry;
	int field_384;
	struct CMenuEntry
	{
		int m_aAction;
		char m_aEntryName[8];
		int m_aSaveSlot;
		int m_aTargetMenu;
	} m_asEntries[18];
};

class CMenuPage {
public:
	static const CMenuScreen ControllerSetup;

};