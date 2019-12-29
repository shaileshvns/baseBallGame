  
Catch-The-Ball:

introduction:
 
Game development is really interesting work, 
 actually when you look at a computer game and the AI implemented in it and its graphics 
 and complexity, you then feel it is impossible to build such type of games.
 But if you know that all these games are depending on graphics libraries
 which made developing games very easy task, you will be interested in designing
 and developing games. We are going to prove that here by developing a simple 2D game 
 depending on OpenGL library, we will introduce the concept of scene rendering and
 object collision, and also we will show how to write a text on the screen to get the score of the player.
 Finally we will show how to use the keyboard and mouse to interact with the game

The game implementation:

We will show step by step how to implement the game.
 First of all the concept of motion in OpenGL should be clear,
 the motion is done by drawing and looping. In every loop, 
the position of the object is adjusted so you fell it is moving.
 Motion in OpenGL has the same concept as the Cartoon films, 
every cycle the drawing is adjusted little bit and 
then all the images are displayed together which results in “moving” characters.