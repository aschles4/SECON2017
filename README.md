# SECON2017

This is a temporary repository to hold the collection of source code used for the IEEE SECON robotic competition.

### Communication Protocol
This section reflects the custom protocol for which the Arduinos will communicate.

#### General
1. The protocol will begin with the `#` character followed by the sender ID of the message.
2. The symbol `_` will divide the sender ID from the recipient ID.
3. The symbol `@` will divide the recipient ID from the task.
4. The symbol `:` will divide the task from the body of the task.
5. The protocol will end with the `$` character.

For example, a message may be encoded as:
```
#0_1@code:1,2,3,5,4$
```
* where `0` is the sender of the message
* where `1` is the recipient of the message
* where `code` is the task of the message
* where `1,2,3,5,4` is the body of the message

#### Drive
The Arduino motion function needs the following information to function:
1. Speed
2. Theta
3. Rotation(speed)

After the header, the characters `mo` for "move" will be sent followed by a space separation of the arguments passed to the move function. These numerical arguments will be the ASCII representation of the numbers to facilitate easier debugging. For example, to call Arduino's move() with speed=280, theta=45 and rotation=0 payload would look as follows:
```
mo 280 45 0
```

Since rotation can be negative, prepending a negative sign (-) to the final argument will constitute a negative rotation. E.g.,
```
mo 0 0 -150
```
### NOTE:
This README will be appended to as the project grows.
