#include "script.h"
#include "keyboard.h"
#include "message.h"
#include <vector>

using std::vector;

void Main();
void HandleKeyboardInput();

vector<DWORD> damagedBones;

// *** SCRIPT START *** ///
void ScriptMain()
{
	Main();
}

void Main()
{
	while (true)
	{
		HandleKeyboardInput();
		WAIT(0);
	}
}

void HandleKeyboardInput()
{
	if (IsKeyJustUp(0x38)) // 8
	{
		Ped playerPed = PLAYER::PLAYER_PED_ID();

		DWORD outBone = -1;
		BOOL success = PED::GET_PED_LAST_DAMAGE_BONE(playerPed, &outBone);

		ShowSubtitle("Bone: " + std::to_string(outBone), 2000);
	}
}
