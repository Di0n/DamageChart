#include "message.h"

void ShowSubtitle(const string& text, const int duration)
{
	std::vector<char> writeable(text.begin(), text.end());
	writeable.push_back('\0');
	UI::_SET_TEXT_ENTRY_2("STRING");
	UI::_ADD_TEXT_COMPONENT_STRING(&writeable[0]);
	UI::_DRAW_SUBTITLE_TIMED(duration, true);
}

void ShowNotification(const string& text)
{
	std::vector<char> writeable(text.begin(), text.end());
	writeable.push_back('\0');
	UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
	UI::_ADD_TEXT_COMPONENT_STRING3(&writeable[0]);
	UI::_DRAW_NOTIFICATION(false, false);
}