INCLUDE Irvine32.inc
INCLUDE Macros.inc

MAP_WIDTH  = 36
MAP_HEIGHT = 20
GROUND_ROW = 19
NUM_TOWERS = 3

EXTERNDEF birdX:BYTE, birdY:BYTE, quitGame:BYTE
EXTERNDEF TowerX:DWORD, TowerWidth:DWORD, PassTower:DWORD
EXTERNDEF CurrScore:DWORD, HighScore:DWORD, GameActive:DWORD

RunGame        PROTO
MapInitialize  PROTO
CreateMap      PROTO
MoveTower      PROTO
CreateTower    PROTO
CheckCollision PROTO
UpdateScore    PROTO
ShowScore      PROTO
