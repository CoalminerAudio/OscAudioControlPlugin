# OscAudioControlPlugin
 Utility plugin for testing audio content in UE5 with TouchOSC 

# set up
To get started with TouchOSC in unreal, you'll need to set up a few things first.
 1 - [Download TouchOSC] (https://hexler.net/touchosc#get) from hexler on your computer, and any other device you'd like to run TouchOSC on. I run mine on a super old Ipad mini 2!
 2 - In your Unreal project, add the plugins "Audio Modulation" and "OSC".
 3 - Download this repo.

# getting strated with TouchOSC
After TouchOSC has been downloaded on your PC, go ahead and run it.
In the menu bar, select File>Open and browse to the download location on your machine for this Repo. Select the UnrealMixingDesk template.
If you would like to run TouchOSC on a seperate device:
 1 - Make sure your PC and your other device are on the same network
 2 - on your PC, Select the Wifi button in the menu
![image](https://github.com/CoalminerAudio/OscAudioControlPlugin/assets/98418608/3087f8a9-b456-43f9-b38a-a7538a7d86b7)
 3 - navigate to server, and click enabled
 4 - On your other device, click the wifi button
 5 - Your PCs server should be a selectable option in the client list, select it
 6 - You should see the template on your other device, you can now close the network on your PC and the template should remain on your device. Be sure to save it to your device!

# Using TouchOSC in unreal
To get TouchOSC and Unreal talking, you'll need to set up some network info, but first we need to add the plugin to Unreal. To do that, simply copy the folder in your Repo named "OscAudioControl" and paste it into your projects plugins folder. If you don't see a plugins folder, you can create a new folder with that name and then paste the folder inside.

Once in Unreal, you'll need to create a new data asset for network communication.
In the content browser, right click and navigate to miscellaneous > Data Asset. In the popup, search for "Osc Audio Control User Info".
Name the asset, and then open it up and click the plus button.

![image](https://github.com/CoalminerAudio/OscAudioControlPlugin/assets/98418608/2ecfe42e-5945-484d-bdda-b4de8bf955bc)

In this data asset you'll need to list your user name for the PC you are using, the IP address for the PC (recieve IP) and the IP address for the touchOSC machine (Send IP)
If you aren't sure how to figure this out, TouchOSC will tell you if you click the chain button in the tool bar, navigate to OSC, enable a connection, and click on the i next to "Recieve port"

Every person in who is hands on in your project and wants to use the AudioControl plugin will need to have there own entry in this list.

# Setting up the mixer
Once you have everything set up for network connection, you'll need to create a data asset for use with the mixer. Just like before, right click in the content browse and navigate to miscellaneous > Data Asset and search for OSCAudioControlMixerLayout.

In this data asset, you'll need to add any control busses you would like to watch in the mixer. Each bus will correspond to one of the faders in the OSC template starting from the top left. 
![image](https://github.com/CoalminerAudio/OscAudioControlPlugin/assets/98418608/c2eb3167-6728-45c2-b783-66b71214ceb9)

# Final steps
Next, you'll need to drag the BP_OscMaster into the world. In teh details pane, you can then select the data assets you have created. 

![image](https://github.com/CoalminerAudio/OscAudioControlPlugin/assets/98418608/ec9dc17c-368f-41d7-b05e-561efd9ee321)

Expand the other categories in the details pane to choose which animations or sounds should trigger in the world when different events are triggered from touchOSC.

In the "Spawning Actors" section, you can choose four different actors in the world to spawn sounds at.

![image](https://github.com/CoalminerAudio/OscAudioControlPlugin/assets/98418608/69a29e25-09e0-4892-ae1f-cfb59a8949b6)

In the animation info, you can choose which animation montages should play at which characters.

![image](https://github.com/CoalminerAudio/OscAudioControlPlugin/assets/98418608/ab1ef154-7fbd-4edf-bde1-e21769852250)

In the Control Bus and Control Bus Mix sections, you can select which control bus mixes and which Mixer profile will be used with the oscTemplate

![image](https://github.com/CoalminerAudio/OscAudioControlPlugin/assets/98418608/047a30bf-fedb-42bd-bbe4-d328d312c6bc)

In the console command section you can type out which console commands should trigger, and wether they should index 0/1. If you do index, a 0 and 1 will be added to the end of the console command. This is useful for commands that have on / off states.

![image](https://github.com/CoalminerAudio/OscAudioControlPlugin/assets/98418608/bb1a7b22-405f-46e9-b3d5-aafd616b99fa)

Finally, in the Sound Info cattegory you can select wether you want to copntrol a sound that already exists in the world, or if you want to spawn a new one. You can select which actor sounds should spawn at, the customn triggers you want to test with the Metasound, wether you want to watch the output or control a float, and the range of the float parameter you want to control.

![image](https://github.com/CoalminerAudio/OscAudioControlPlugin/assets/98418608/18124818-8002-4804-9e8b-d82ac421a15d)


