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
