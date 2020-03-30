## Github Troll Assignment
### Will Yeo
### LMSC 261
### March 29, 2020

For the past month or so, I have been monitoring Github pull request threads for the PureData, a visual programming language created by Miller Puckette. Here are a few of the more interesting changes that were made.

1. "Increase socket receive buffer sizes":

This pull request was created in order to enable PD to receive large UDP (User Diagram Protocol) packets by increasing the buffer sizes of all localhost "sockets" to 65,536 bytes. While I am a still a little bit unclear on computer networking and Internet protocol suite terminology, I believe the purpose of this change would be to enable the pureData to send data more quickly via UDP. User Diagram Protocol is a more lightweight, "connectionless" protocol than TCP that does not order messages or track connections.

- How those changes were described in comments: A collaborator named "Christof Ressi" first raised the issue of the size of the buffer on the stack. He also noted that, functionally, this shouldn't be a problem because data messages are only passed after the function returns.

- How the collaborators communicated on the platform: The others on the thread gave several suggestions on how to reduce memory usage and improve the existing code to maximize buffer usage. Christof noted that memory would leak as long as the "netsend_readbin()" command was called from a different thread than the "netreceive_setup()". There was some debate about where to include the "netsend_readbin()" command. Another collaborator, Dan, noted that multiple instances of the command could be running in several background threads. Eventually, Christof, fixed the issue and closed the thread.

2. "Add a knob GUI":

This change was relatively straightforward. The pull requester wanted to add a knob control to PD's graphic user interface. Another developer, metalu.net, has provided PD users with external GUI controls including a knob control called "mknob". After some discussion, one of the collaborators agreed to prepare a pull request to include "mknob" into PD's source code.

- How those changes were described in comments: The first user to bring the issue up, someone named "porres", mentioned the need to have a knob GUI native to PD. He discussed the various external knob GUIs available and how they were all based on original PD code, anyway.

- How the collaborators communicated on the platform: The others agreed with porres and noted that a knob feature was a common request from users. Eventually, a member named "Antoine Rousseau", who appears to be a developer from metalu.net, created a pull request to incorporate metalu's knob into PD. "porres" noted some design features on the mknob that needed tweaking, and they agreed to discuss further in a later pull request.

3. "Can't input tilde ~ character":

The user "Marius Riis Haugan" found that using pureData on Windows 10 with a Norwegian keyboard layout, inputting the tilde character outputs a blank space.

- How those changes were described in comments: Marius included a link to picture of a Norwegian keyboard layout and instructions on how the tilde was typed using a Norwegian keyboard by holding the "Alt Gr" button.

- How the collaborators communicated on the platform: A user named "umläute" asked Marius which exact version of PD he was using. After Marius told him, "umläute" explained that this problem had been fixed in a prior release and reminded him that he should always download the latest release to make sure that the bug hadn't already been fixed.
