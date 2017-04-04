# Xyverz's Kinesis Keymap

## About this keymap:

The Dvorak layout shown here stems from my early Kinesis years, using the Contour PS/2 with a Dvorak software layout. Because of this, the RBRC and LBRC were on opposite sides of the board in the corner keys. I've decided to continue using this layout with my QMK Kinesis.

The QWERTY layout shown here is based entirely on the Kinesis Advantage layout. The Colemak layout is merely an adaptation of that.

I've enabled persistent keymaps for Qwerty, Dvorak and Colemak layers, similar to the default Planck layouts.

## Still to do:

 * Implement the CapsLock, NumLock, and ScrLck LEDs on the off-chance that I decide to actually solder some to the keyboard.

### Function Keys on All Layers (keypad toggles):
	,-----------------------------------------------------------------.
	|  Esc |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   F7   |  F8   |
 	`-----------------------------------------------------------------'
	,-----------------------------------------------------------------.
	|  F9  |  F10 |  F11 |  F12 | PScr | SLck | Paus | Keypad | Reset |
	`-----------------------------------------------------------------'

### Layer 0: Dvorak layer

	,-------------------------------------------.,-------------------------------------------.
	|   ]    |   1  |   2  |   3  |   4  |   5  ||   6  |   7  |   8  |   9  |   0  |   [    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| Tab    |   '  |   ,  |   .  |   P  |   Y  ||   F  |   G  |   C  |   R  |   L  |   \    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| CapsLk |   A  |   O  |   E  |   U  |   I  ||   D  |   H  |   T  |   N  |   S  |   -    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| LShift |   Z  |   X  |   C  |   V  |   X  ||   B  |   M  |   W  |   V  |   Z  | RShift |
	`--------+------+------+------+------+------'`------+------+------+------+------+--------'
	         |   `  |  Ins | Left | Rght |              |  Up  |  Dn  |   /  |   =  |
	         `---------------------------'              `---------------------------'
	                             ,--------------.,--------------.
	                             | LCtl  | LAlt || RGUI | RCtl  |
	                      ,------|-------|------||------+-------+-------.
	                      |      |  Del  | Home || PgUp | Enter |       |
	                      | BkSp |   /   |------||------|   /   | Space |
	                      |      | Media | End  || PgDn | KeyPd |       |
	                      `---------------------'`----------------------'

### Layer 1: QWERTY layer

	,-------------------------------------------.,-------------------------------------------.
	|   =    |   1  |   2  |   3  |   4  |   5  ||   6  |   7  |   8  |   9  |   0  |   -    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| Tab    |   Q  |   W  |   E  |   R  |   T  ||   Y  |   U  |   I  |   O  |   P  |   \    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| CapsLk |   A  |   S  |   D  |   F  |   G  ||   H  |   J  |   K  |   L  |   ;  |   '    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| LShift |   Z  |   X  |   C  |   V  |   B  ||   N  |   M  |   ,  |   .  |   /  | RShift |
	`--------+------+------+------+------+------'`------+------+------+------+------+--------'
	         |   `  |  Ins | Left | Rght |              |  Up  |  Dn  |   [  |   ]  |
	         `---------------------------'              `---------------------------'
	                             ,--------------.,--------------.
	                             | LCtl  | LAlt || RGUI | RCtl  |
	                      ,------|-------|------||------+-------+-------.
	                      |      |  Del  | Home || PgUp | Enter |       |
	                      | BkSp |   /   |------||------|   /   | Space |
	                      |      | Media | End  || PgDn | KeyPd |       |
	                      `---------------------'`----------------------'
	 
### Keymap 2: Colemak layer

	,-------------------------------------------.,-------------------------------------------.
	|   =    |   1  |   2  |   3  |   4  |   5  ||   6  |   7  |   8  |   9  |   0  |   -    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| Tab    |   Q  |   W  |   F  |   P  |   G  ||   J  |   L  |   U  |   Y  |   ;  |   \    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| BkSpc  |   A  |   R  |   S  |   T  |   D  ||   H  |   N  |   E  |   I  |   O  |   '    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| LShift |   Z  |   X  |   C  |   V  |   B  ||   K  |   M  |   ,  |   .  |   /  | RShift |
	`--------+------+------+------+------+------'`------+------+------+------+------+--------'
	         |   `  |  Ins | Left | Rght |              |  Up  |  Dn  |   [  |   ]  |
	         `---------------------------'              `---------------------------'
	                             ,--------------.,--------------.
	                             | LCtl  | LAlt || RGUI | RCtl  |
	                      ,------|-------|------||------+-------+-------.
	                      |      |  Del  | Home || PgUp | Enter |       |
	                      | BkSp |   /   |------||------|   /   | Space |
	                      |      | Media | End  || PgDn | KeyPd |       |
	                      `---------------------'`----------------------'

### layer 3 : Media layer

	,-------------------------------------------.,-------------------------------------------.
	|   F11  |  F1  |  F2  |  F3  |  F4  |  F5  ||  F6  |  F7  |  F8  |  F9  |  F10 |  F12   |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	|        |      |      |      |      |      ||      |      |      |      |      |        |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	|        |      |      |      |      |      ||      | Mute | Vol- | Vol+ |      |        |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	|        |      |      |      |      |      || Stop | Prev | Play | Next | Sel  |        |
	`--------+------+------+------+------+------'`------+------+------+------+------+--------'
	         |      |      |      |      |              |      |      |      |      |
	         `---------------------------'              `---------------------------'
	                              ,-------------.,-------------.
	                              |      |      ||      |      |
	                       ,------|------|------||------+------+------.
	                       |      |      |      ||      |      |      |
	                       |      |      |------||------|      |      |
	                       |      |      |      ||      |      |      |
	                       `--------------------'`--------------------'



### Keymap 4: Keypad layer

	,-------------------------------------------.,-------------------------------------------.
	| Power  |      |      |      |      |      ||      | NmLk | KP = | KP / | KP * |        |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| Sleep  |      |      |      |      |      ||      | KP 7 | KP 8 | KP 9 | KP - |        |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| Wake   |      |QWERTY|Colemk|Dvorak|      ||      | KP 4 | KP 5 | KP 6 | KP + |        |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	|        |      |      |      |      |      ||      | KP 1 | KP 2 | KP 3 |KP Ent|        |
	`--------+------+------+------+------+------'`------+------+------+------+------+--------'
	         |      |      |      |      |              |      |      | KP . |KP Ent|      |
	         `---------------------------'              `----------------------------------'
	                              ,-------------.,-------------.
	                              |      |      ||      |      |
	                       ,------|------|------||------+------+------.
	                       |      |      |      ||      |      |      |
	                       |      |      |------||------|      | KP 0 |
	                       |      |      |      ||      |      |      |
	                       `--------------------'`--------------------'