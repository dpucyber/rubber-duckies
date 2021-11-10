# rubber-duckies
ATtiny85 based rubber ducky knockoffs. Cheap keyboard/mouse emulators/injectors.

### Setup
1. Install Arduino IDE (Follow one of the guides below)
   - [Linux Guide](https://www.arduino.cc/en/guide/linux)
   - [Windows Guide](https://www.arduino.cc/en/guide/windows)
   - [MacOS Guide](https://www.arduino.cc/en/guide/macOSX)
   
2. Open Arduino IDE

3. Then, in Arduino click **Preferences** (File > Preferences):

   ![img](https://raw.githubusercontent.com/dpucyber/rubber-duckies/main/images/dropdowntopreferences.png)

4. Add `http://digistump.com/package_digistump_index.json` to **additional board manager URLs**.
   ![img](https://raw.githubusercontent.com/dpucyber/rubber-duckies/main/images/boardurl.png)

5. Click **OK** to exit that.

6. Open **Boards Manager** (via Tools>Board>Boards Manager):
   ![img](https://raw.githubusercontent.com/dpucyber/rubber-duckies/main/images/boardmanager.png)

7. Search for `Digistump AVR Boards` and click **INSTALL**. ![img](https://raw.githubusercontent.com/dpucyber/rubber-duckies/main/images/digistump.png)

   
### Programming/Flashing

1. Download this repo [here](https://github.com/dpucyber/rubber-duckies/archive/refs/heads/main.zip).
2. Unzip the main.zip file, then open the `.ino` file you want to use. In this example we'll use the rickroll file.
3. Once you opened it, make sure the board under **Tools > Board** is **"Digispark (Default - 16.5)"**
4. Lastly, click the **Upload** button once everything was set. (Double check that port was selected if you can't upload it)
   ![img](https://raw.githubusercontent.com/dpucyber/rubber-duckies/main/images/flash.png)
5. ***Then*** plug in the digispark when it says "Plug in device now... (will timeout in 60 seconds)"
6. After that completes you should have your very own rick rolling USB stick. 

# More Links
- [Ducky Script Converter](https://cedarctic.github.io/digiQuack/)

- [Ducky Scripts](https://github.com/hak5/usbrubberducky-payloads)

- [More Scripts](https://github.com/mehedishakeel/DigiSpark-Payloads)

  



