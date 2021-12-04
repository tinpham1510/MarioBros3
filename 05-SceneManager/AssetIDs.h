#pragma once

//
// This file contains all IDs of game assets 
//

#define ID_TEX_MARIO 0
#define ID_TEX_ENEMY 10
#define ID_TEX_ENEMY2 15
#define ID_TEX_MISC 20
#define ID_TEX_MAP 30
#define ID_TEX_PIPE	50



#define OBJECT_TYPE_MARIO	0
#define OBJECT_TYPE_BRICK	1
#define OBJECT_TYPE_GOOMBA	2
#define OBJECT_TYPE_KOOPAS	3
#define OBJECT_TYPE_COIN 4
#define OBJECT_TYPE_PLATFORM 5
#define OBJECT_TYPE_ITEM 6
#define OBJECT_TYPE_KOOPASFLY 8
#define OBJECT_TYPE_REDGOOMBA 9
#define OBJECT_TYPE_FIREPLANT	10
#define OBJECT_TYPE_COLORBOX 100
#define OBJECT_TYPE_QUESTIONBRICK 200
#define OBJECT_TYPE_PIPE 300



#define OBJECT_TYPE_PORTAL	50


#pragma region MARIO 

#define ID_SPRITE_MARIO 10000
#define ID_SPRITE_MARIO_BIG (ID_SPRITE_MARIO + 1000)
#define ID_SPRITE_MARIO_BIG_IDLE (ID_SPRITE_MARIO_BIG + 100)
#define ID_SPRITE_MARIO_BIG_IDLE_LEFT (ID_SPRITE_MARIO_BIG_IDLE + 10)
#define ID_SPRITE_MARIO_BIG_IDLE_RIGHT (ID_SPRITE_MARIO_BIG_IDLE + 20)

#define ID_SPRITE_MARIO_BIG_WALKING (ID_SPRITE_MARIO_BIG + 200)
#define ID_SPRITE_MARIO_BIG_WALKING_LEFT (ID_SPRITE_MARIO_BIG_WALKING + 10)
#define ID_SPRITE_MARIO_BIG_WALKING_RIGHT (ID_SPRITE_MARIO_BIG_WALKING + 20)
#define ID_SPRITE_MARIO_BIG_RUNNING (ID_SPRITE_MARIO_BIG + 300)
#define ID_SPRITE_MARIO_BIG_RUNNING_LEFT (ID_SPRITE_MARIO_BIG_RUNNING + 10)
#define ID_SPRITE_MARIO_BIG_RUNNING_RIGHT (ID_SPRITE_MARIO_BIG_RUNNING + 20)
#define ID_SPRITE_MARIO_BIG_JUMP (ID_SPRITE_MARIO_BIG + 400)
#define ID_SPRITE_MARIO_BIG_JUMP_WALK (ID_SPRITE_MARIO_BIG_JUMP + 10)
#define ID_SPRITE_MARIO_BIG_JUMP_WALK_LEFT (ID_SPRITE_MARIO_BIG_JUMP_WALK + 2)
#define ID_SPRITE_MARIO_BIG_JUMP_WALK_RIGHT (ID_SPRITE_MARIO_BIG_JUMP_WALK + 6)
#define ID_SPRITE_MARIO_BIG_JUMP_RUN (ID_SPRITE_MARIO_BIG_JUMP + 20)
#define ID_SPRITE_MARIO_BIG_JUMP_RUN_LEFT (ID_SPRITE_MARIO_BIG_JUMP_RUN + 2)
#define ID_SPRITE_MARIO_BIG_JUMP_RUN_RIGHT (ID_SPRITE_MARIO_BIG_JUMP_RUN + 6)
#define ID_SPRITE_MARIO_BIG_SIT (ID_SPRITE_MARIO_BIG + 500)
#define ID_SPRITE_MARIO_BIG_SIT_LEFT (ID_SPRITE_MARIO_BIG_SIT + 10)
#define ID_SPRITE_MARIO_BIG_SIT_RIGHT (ID_SPRITE_MARIO_BIG_SIT + 20)
#define ID_SPRITE_MARIO_BIG_BRACE (ID_SPRITE_MARIO_BIG + 600)
#define ID_SPRITE_MARIO_BIG_BRACE_LEFT (ID_SPRITE_MARIO_BIG_BRACE + 10)
#define ID_SPRITE_MARIO_BIG_BRACE_RIGHT (ID_SPRITE_MARIO_BIG_BRACE + 20)

#define ID_SPRITE_MARIO_BIG_KICK (ID_SPRITE_MARIO_BIG + 700)
#define ID_SPRITE_MARIO_BIG_KICK_LEFT (ID_SPRITE_MARIO_BIG_KICK + 10)
#define ID_SPRITE_MARIO_BIG_KICK_RIGHT (ID_SPRITE_MARIO_BIG_KICK + 20)

#define ID_SPRITE_MARIO_DIE (ID_SPRITE_MARIO + 3000)

#define ID_SPRITE_MARIO_SMALL (ID_SPRITE_MARIO + 2000)
#define ID_SPRITE_MARIO_SMALL_IDLE (ID_SPRITE_MARIO_SMALL + 100)
#define ID_SPRITE_MARIO_SMALL_IDLE_LEFT (ID_SPRITE_MARIO_SMALL_IDLE + 10)
#define ID_SPRITE_MARIO_SMALL_IDLE_RIGHT (ID_SPRITE_MARIO_SMALL_IDLE + 20)

#define ID_SPRITE_MARIO_SMALL_WALKING (ID_SPRITE_MARIO_SMALL + 200)
#define ID_SPRITE_MARIO_SMALL_WALKING_LEFT (ID_SPRITE_MARIO_SMALL_WALKING + 10)
#define ID_SPRITE_MARIO_SMALL_WALKING_RIGHT (ID_SPRITE_MARIO_SMALL_WALKING + 20)
#define ID_SPRITE_MARIO_SMALL_RUNNING (ID_SPRITE_MARIO_SMALL + 300)
#define ID_SPRITE_MARIO_SMALL_RUNNING_LEFT (ID_SPRITE_MARIO_SMALL_RUNNING + 10)
#define ID_SPRITE_MARIO_SMALL_RUNNING_RIGHT (ID_SPRITE_MARIO_SMALL_RUNNING + 20)
#define ID_SPRITE_MARIO_SMALL_JUMP (ID_SPRITE_MARIO_SMALL + 400)
#define ID_SPRITE_MARIO_SMALL_JUMP_WALK (ID_SPRITE_MARIO_SMALL_JUMP + 10)
#define ID_SPRITE_MARIO_SMALL_JUMP_WALK_LEFT (ID_SPRITE_MARIO_SMALL_JUMP_WALK + 2)
#define ID_SPRITE_MARIO_SMALL_JUMP_WALK_RIGHT (ID_SPRITE_MARIO_SMALL_JUMP_WALK + 6)
#define ID_SPRITE_MARIO_SMALL_JUMP_RUN (ID_SPRITE_MARIO_SMALL_JUMP + 20)
#define ID_SPRITE_MARIO_SMALL_JUMP_RUN_LEFT (ID_SPRITE_MARIO_SMALL_JUMP_RUN + 2)
#define ID_SPRITE_MARIO_SMALL_JUMP_RUN_RIGHT (ID_SPRITE_MARIO_SMALL_JUMP_RUN + 6)

#define ID_SPRITE_MARIO_SMALL_SIT (ID_SPRITE_MARIO_SMALL + 500)
#define ID_SPRITE_MARIO_SMALL_SIT_LEFT (ID_SPRITE_MARIO_SMALL_SIT + 10)
#define ID_SPRITE_MARIO_SMALL_SIT_RIGHT (ID_SPRITE_MARIO_SMALL_SIT + 20)

#define ID_SPRITE_MARIO_SMALL_BRACE (ID_SPRITE_MARIO_SMALL + 500)
#define ID_SPRITE_MARIO_SMALL_BRACE_LEFT (ID_SPRITE_MARIO_SMALL_BRACE + 10)
#define ID_SPRITE_MARIO_SMALL_BRACE_RIGHT (ID_SPRITE_MARIO_SMALL_BRACE + 20)


#define ID_SPRITE_MARIO_RACOON (ID_SPRITE_MARIO + 4000)
#define ID_SPRITE_MARIO_RACOON_IDLE (ID_SPRITE_MARIO_RACOON + 100)
#define ID_SPRITE_MARIO_RACOON_IDLE_LEFT (ID_SPRITE_MARIO_RACOON_IDLE + 10)
#define ID_SPRITE_MARIO_RACOON_IDLE_RIGHT (ID_SPRITE_MARIO_RACOON_IDLE + 20)

#define ID_SPRITE_MARIO_RACOON_WALKING (ID_SPRITE_MARIO_RACOON + 200)
#define ID_SPRITE_MARIO_RACOON_WALKING_LEFT (ID_SPRITE_MARIO_RACOON_WALKING + 10)
#define ID_SPRITE_MARIO_RACOON_WALKING_RIGHT (ID_SPRITE_MARIO_RACOON_WALKING + 20)
#define ID_SPRITE_MARIO_RACOON_RUNNING (ID_SPRITE_MARIO_RACOON + 300)
#define ID_SPRITE_MARIO_RACOON_RUNNING_LEFT (ID_SPRITE_MARIO_RACOON_RUNNING + 10)
#define ID_SPRITE_MARIO_RACOON_RUNNING_RIGHT (ID_SPRITE_MARIO_RACOON_RUNNING + 20)
#define ID_SPRITE_MARIO_RACOON_JUMP (ID_SPRITE_MARIO_RACOON + 400)
#define ID_SPRITE_MARIO_RACOON_JUMP_WALK (ID_SPRITE_MARIO_RACOON_JUMP + 10)
#define ID_SPRITE_MARIO_RACOON_JUMP_WALK_LEFT (ID_SPRITE_MARIO_RACOON_JUMP_WALK + 2)
#define ID_SPRITE_MARIO_RACOON_JUMP_WALK_RIGHT (ID_SPRITE_MARIO_RACOON_JUMP_WALK + 6)
#define ID_SPRITE_MARIO_RACOON_JUMP_RUN (ID_SPRITE_MARIO_RACOON_JUMP + 20)
#define ID_SPRITE_MARIO_RACOON_JUMP_RUN_LEFT (ID_SPRITE_MARIO_RACOON_JUMP_RUN + 2)
#define ID_SPRITE_MARIO_RACOON_JUMP_RUN_RIGHT (ID_SPRITE_MARIO_RACOON_JUMP_RUN + 6)
#define ID_SPRITE_MARIO_RACOON_SIT (ID_SPRITE_MARIO_RACOON + 500)
#define ID_SPRITE_MARIO_RACOON_SIT_LEFT (ID_SPRITE_MARIO_RACOON_SIT + 10)
#define ID_SPRITE_MARIO_RACOON_SIT_RIGHT (ID_SPRITE_MARIO_RACOON_SIT + 20)
#define ID_SPRITE_MARIO_RACOON_BRACE (ID_SPRITE_MARIO_RACOON + 600)
#define ID_SPRITE_MARIO_RACOON_BRACE_LEFT (ID_SPRITE_MARIO_RACOON_BRACE + 10)
#define ID_SPRITE_MARIO_RACOON_BRACE_RIGHT (ID_SPRITE_MARIO_RACOON_BRACE + 20)

#define ID_SPRITE_MARIO_RACOON_FALLDOWN (ID_SPRITE_MARIO_RACOON + 800)
#define ID_SPRITE_MARIO_RACOON_JUMP_FALLDOWN (ID_SPRITE_MARIO_FALLDOWN + 10)
#define ID_SPRITE_MARIO_RACOON_JUMP_FALLDOWN_LEFT (ID_SPRITE_MARIO_JUMP_FALLDOWN + 2)
#define ID_SPRITE_MARIO_RACOON_JUMP_FALLDOWN_RIGHT (ID_SPRITE_MARIO_JUMP_FALLDOWN + 6)
#define ID_SPRITE_MARIO_RACOON__JUMP_RUN_FALLDOWN (ID_SPRITE_MARIO_FALLDOWN + 20)
#define ID_SPRITE_MARIO_RACOON_JUMP_RUN_FALLDOWN_LEFT (ID_SPRITE_MARIO_JUMP_RUN_FALLDOWN + 2)
#define ID_SPRITE_MARIO_RACOON_JUMP_RUN_FALLDOWN_RIGHT (ID_SPRITE_MARIO_JUMP_RUN_FALLDOWN + 6)

#define ID_SPRITE_MARIO_RACOON_KICK (ID_SPRITE_MARIO_RACOON + 700)
#define ID_SPRITE_MARIO_RACOON_KICK_LEFT (ID_SPRITE_MARIO_RACOON_KICK + 10)
#define ID_SPRITE_MARIO_RACOON_KICK_RIGHT (ID_SPRITE_MARIO_RACOON_KICK + 20)

#define ID_SPRITE_MARIO_RACOON_ATTACK (ID_SPRITE_MARIO_RACOON + 900)
#define ID_SPRITE_MARIO_RACOON_ATTACK_LEFT ( ID_SPRITE_MARIO_RACOON_ATTACK + 10)
#define ID_SPRITE_MARIO_RACOON_ATTACK_RIGHT ( ID_SPRITE_MARIO_RACOON_ATTACK + 20)
#pragma endregion 

#define ID_SPRITE_BRICK 20000

#define ID_SPRITE_GOOMBA 30000
#define ID_SPRITE_GOOMBA_WALK (ID_SPRITE_GOOMBA + 1000)
#define ID_SPRITE_GOOMBA_DIE (ID_SPRITE_GOOMBA + 2000)
#define ID_SPRITE_GOOMBA_DIE_IMPACT (ID_SPRITE_GOOMBA + 3000)

#define ID_SPRITE_RED_GOOMBA (ID_SPRITE_GOOMBA + 5000)
#define ID_SPRITE_RED_GOOMBA_WING (ID_SPRITE_RED_GOOMBA + 100)
#define ID_SPRITE_RED_GOOMBA_WING_WALKING (ID_SPRITE_RED_GOOMBA_WING + 10)
#define ID_SPRITE_RED_GOOMBA_WING_JUMPFLY (ID_SPRITE_RED_GOOMBA_WING + 20)

#define ID_SPRITE_RED_GOOMBA_PLATFORM (ID_SPRITE_RED_GOOMBA + 200)
#define ID_SPRITE_RED_GOOMBA_PLATFORM_WALKING (ID_SPRITE_RED_GOOMBA_PLATFORM + 10)
#define ID_SPRITE_RED_GOOMBA_PLATFORM_DIE (ID_SPRITE_RED_GOOMBA_PLATFORM + 20)
#define ID_SPRITE_RED_GOOMBA_PLATFORM_DIE_T (ID_SPRITE_RED_GOOMBA_PLATFORM + 30)

#define ID_SPRITE_COIN 40000

#define ID_SPRITE_CLOUD 50000
#define ID_SPRITE_CLOUD_BEGIN (ID_SPRITE_CLOUD+1000)
#define ID_SPRITE_CLOUD_MIDDLE (ID_SPRITE_CLOUD+2000)
#define ID_SPRITE_CLOUD_END (ID_SPRITE_CLOUD+3000)

#define ID_SPRITE_QUESTIONBRICK 60000
#define ID_SPRITE_QUESTIONBRICK_EMP (ID_SPRITE_QUESTIONBRICK + 1000)

#define ID_SPRITE_MUSH	62000

#define ID_SPRITE_KOOPAS	70000
#define ID_SPRITE_KOOPAS_WALKING	(ID_SPRITE_KOOPAS + 1000)
#define ID_SPRITE_KOOPAS_WALKING_LEFT	(ID_SPRITE_KOOPAS_WALKING + 100)
#define ID_SPRITE_KOOPAS_WALKING_RIGHT	(ID_SPRITE_KOOPAS_WALKING + 200)



#define ID_SPRITE_KOOPAS_SHELL	(ID_SPRITE_KOOPAS + 2000)
#define ID_SPRITE_KOOPAS_SHELL_UP		(ID_SPRITE_KOOPAS_SHELL + 100)
#define ID_SPRITE_KOOPAS_SHELL_DOWN		(ID_SPRITE_KOOPAS_SHELL + 200)
#define ID_SPRITE_KOOPAS_SHELL_SLIP	(ID_SPRITE_KOOPAS_SHELL + 300)

#define ID_SPRITE_KOOPASFLY (ID_SPRITE_KOOPAS + 5000)
#define ID_SPRITE_KOOPASFLY_JUMP_LEFT (ID_SPRITE_KOOPASFLY + 100)
#define ID_SPRITE_KOOPASFLY_JUMP_RIGHT (ID_SPRITE_KOOPASFLY + 200)

#define ID_SPRITE_KOOPASFLY_WALKING (ID_SPRITE_KOOPAS + 6000)
#define ID_SPRITE_KOOPASFLY_WALKING_LEFT (ID_SPRITE_KOOPASFLY_WALKING + 100)
#define ID_SPRITE_KOOPASFLY_WALKING_RIGHT (ID_SPRITE_KOOPASFLY_WALKING + 200)

#define ID_SPRITE_KOOPASFLY_SHELL (ID_SPRITE_KOOPAS + 7000)
#define ID_SPRITE_KOOPASFLY_SHELL_UP (ID_SPRITE_KOOPASFLY_SHELL + 100)
#define ID_SPRITE_KOOPASFLY_SHELL_DOWN (ID_SPRITE_KOOPASFLY_SHELL + 200)
#define ID_SPRITE_KOOPASFLY_SHELL_SLIP (ID_SPRITE_KOOPASFLY_SHELL + 300)


#define ID_SPRITE_WARPIPE	80000
#define ID_SPRITE_WARPIPE_LEFT	(ID_SPRITE_WARPIPE + 1000)
#define ID_SPRITE_WARPIPE_RIGHT	(ID_SPRITE_WARPIPE + 2000)