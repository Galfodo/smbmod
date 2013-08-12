.global Timers, LongSubtimer, Pretimer, FrameCounter
.global Tick

.struct RT
	Select .byt
	PlayerAnim .byt
	JumpSwim .byt
	Running .byt
	BlockBounce .byt
	SideCollision .byt
	Jumpspring .byt
	GameTimerCtrl .byt
	ClimbSide .byt
	EnemyFrame .byt 5
	FrenzyEnemy .byt
	BowserFireBreath .byt
	Stomp .byt
	AirBubble .byt 3
.endstruct
	
.struct LT
	ScrollInterval .byt
	EnemyInterval .byt 5
	BrickCoin .byt
	Injury .byt
	StarInvincible .byt
	Screen .byt
	WorldEnd .byt
	Demo .byt
.endstruct

LongSubtimerFrames = 21 

