# Melodic mybot_ws on docker

Forked from : [richardw05/mybot_ws](https://github.com/richardw05/mybot_ws)

## WTF? (What's This For?)

This repo contains a docker container that hosts a development environment for CSC 376- Fundamental of Robotics at the University of Toronto. It runs Ubuntu 20.04 with Gazebo(11.10.2), Eigen(3.3.7), CMake(3.16.3)  which are required for the course's assignments. Upong building and running the container, one can access the development environment's desktop with a VNC viewer. 

## Dependancies 

In order to run this docker container the host machines (Ubuntu/OSX/Windows) should have 
* docker 
* docker-compose
* A vnc viewer (tested tigervnc)
* cmake (tested 3.16.3)




### Install dependancies

* Ubuntu 
    * Install docker 
    ```
    sudo apt install docker.io
    sudo docker run hello-world # tests docker installation
    ```
    * Install docker-compose
    ```
    sudo apt install docker-compose
    ```
    * Install a vncviewer eg: tigervnc 
    ```
    sudo apt-get install tigervnc-viewer
    ```
* OSX
    * MAC installation instructions comes here 

* Windows 
    * Windows installation instructions comes here


### Build and run docker container 

* Ubuntu 
    * run, 
    ```
    cd  <path to this repo>/csc376-dev-env
    sudo make up
    ```
* OSX 
    * MAC installation comes here 
* Windows 
    * windows installation comes here  

## Usage

* Ubuntu 
    1. After running the docker container using ```make up``` command, run the vnc viewer to access the development environment desktop. In a new terminal run, 
    ```
    vncviewer 127.0.0.1:5900
    ```
    The password is **ubuntu** 

    2. one can access the terminal by pressing the home button(button left corner in VNC desktop) -> System Tools -> LXTerminal
    3. To test build environment 

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
