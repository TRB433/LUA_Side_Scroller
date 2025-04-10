# LUA_Assignment_Game

Game elements can be easily changed in Script.lua, these include:
	-Window dimensions and position
	-UI size, position and colours
	-Player constants, such as speed, lives, shoot speed, sprite
	-Level sprites and scroll speed
	-Audio
	(All constants and tables have been exposed/made)


4 LUA functions have been made and can be called in the C++ code, these include:
	-Enemy movement
	-Random number generator
	-Increase player score and lives using constants that can be tweaked like the score multiplier
	-Reset player score, that also saves the last score


LUA functions to call C++ code, these include:
	-RunGame() calls the Run() C++ method
	-BuildLevel() calls the BuildNewLevel C++ method
	-ResetEverything() calls the ResetAll C++ method


2 extra C++ functions have been created in the GameOver class, these are to handle the audio and are called using the LUA script:
	-Added private methods to GameOver.h
	-Added dispatcher to GameOver.h
	-Created Init function in GameOver class to initialise the dispatcher
	-PlayingAudio() calls the PlayAudio C++ method I created
	-MutingAudio() calls the MuteAudio C++ method I created
