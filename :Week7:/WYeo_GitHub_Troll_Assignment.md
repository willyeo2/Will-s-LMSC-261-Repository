## Github Troll Assignment
### Will Yeo
### LMSC 261
### March 29, 2020

For the past month or so, I have been monitoring Github pull request threads for the PureData, a visual programming language created by Miller Puckette. Here are a few of the more interesting changes that were made.

1. Increase socket receive buffer sizes:

This pull request was created in order to enable PD to receive large UDP (User Diagram Protocol) packets by increasing the buffer sizes of all localhost "sockets" to 65,536 bytes. While I am a still a little bit unclear on computer networking and Internet protocol suite terminology, I believe the purpose of this change would be to more quickly send data necessary for the 
