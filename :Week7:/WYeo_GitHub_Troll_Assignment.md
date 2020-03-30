## Github Troll Assignment
### Will Yeo
### LMSC 261
### March 29, 2020

For the past month or so, I have been monitoring Github pull request threads for the PureData, a visual programming language created by Miller Puckette. Here are a few of the more interesting changes that were made.

1. Increase socket receive buffer sizes:

- This pull request was created in order to enable PD to receive large UDP (User Diagram Protocol) packets by increasing the buffer sizes of all localhost "sockets" to 65,536 bytes. While I am a still a little bit unclear on computer networking and Internet protocol suite terminology, I believe the purpose of this change would be to enable the pureData to send critical data more quickly via UDP. User Diagram Protocol is a more lightweight, "connectionless" protocol than TCP that does not order messages or track connections.

- How those changes were described in comments:

- How the collaborators communicated on the platform:

2. Add a knob GUI:

This change was relatively straightforward. The pull requester wanted to add a knob control to PD's graphic user interface. Another developer, metalu.net, has provided PD users with external GUI controls including a knob control called "mknob". After some discussion, one of the users agreed to prepare a pull request to include "mknob" into PD's source code.

- How those changes were described in comments:

- How the collaborators communicated on the platform:

3.
