# Gazebo development enviroment in Docker for CSC 376

Modified from : [mrkoz/mybot_ws](https://github.com/mrkoz/mybot_ws)

## WTF? (What's This For?)

This repo contains a docker container that hosts a development environment for CSC 376- Fundamental of Robotics at the University of Toronto. It runs Ubuntu 20.04 with Gazebo(11.10.2), Eigen(3.3.7), CMake(3.16.3)  which are required for the course's assignments. Upong building and running the container, one can access the development environment's desktop with a VNC viewer. 

## Dependancies 

In order to run this docker container the host machines (Ubuntu/macOS/Windows) should have 
* docker 
* docker-compose
* A vnc viewer (tested tigervnc)
* cmake (tested 3.16.3)




### Install dependancies

* Ubuntu 
    * Check CMake installation or else install it 
    ```
    cmake --version 
    # if this throws a cmake not found error 
    sudo apt-get install cmake 
    ```
    * Install docker 
    ```
    sudo apt-get install docker.io
    sudo docker run hello-world # tests docker installation
    ```
    * Install docker-compose
    ```
    sudo apt-get install docker-compose
    ```
    * Install a vncviewer eg: tigervnc 
    ```
    sudo apt-get install tigervnc-viewer
    ```

* macOS
    * Install Cmake 
    ```
    brew install cmake 
    ```
    * Docker installation-
    
        Follow instructions [here](https://runnable.com/docker/install-docker-on-macos) to install docker on Mac. To verify installation run the commands below and you should not get any error.  
    ```
    docker --version 
    docker-machine --version 
    docker-compose --version
    ```

* Windows 
    * Windows installation instructions comes here




## Usage

### Build and run docker container and VNC server 

* Ubuntu 
    * run, 
    ```
    cd  <path to this repo>/csc376-dev-env
    sudo make up
    ```
* macOS 
    * run, 
    ```
    cd  <path to this repo>/csc376-dev-env
    make up
    ```
* Windows 
    * windows installation comes here  

### Run VNC client to access dev environment 
After running the docker container using ```make up``` command, run the vnc viewer to access the development environment desktop. In a new terminal run, 

* Ubuntu 
    ```
    vncviewer 127.0.0.1:5900
    ```
    The password is **ubuntu** 
* macOS 
    ```
    open vnc://127.0.0.1:5900
    ```


### Once VNC client is running and you can access the desktop 

* (Ubuntu/macOS/Windows) Common Instructions
    1. one can access the terminal by pressing the home button(button left corner in VNC desktop) -> System Tools -> LXTerminal
    
    2. To test build environment 

    *   Inside vnc,  
        ```
        cd /home/ubuntu/csc376
        mkdir build 
        cd build 
        cmake ..
        make 
        ```
    * run simulation of the robot and its world in gazebo,
        ```
        cd /home/ubuntu/csc376
        gazebo csc376_assigment.world --verbose
        ```
    * **Open a new terminal** and run your code,
        ```
        cd /home/ubuntu/csc376/build/
        ./csc376-assigment
        ```
   



## References for docker environment

* [richardw05/mybot_ws](https://github.com/richardw05/mybot_ws)
* [mrkoz/mybot_ws](https://github.com/mrkoz/mybot_ws)
