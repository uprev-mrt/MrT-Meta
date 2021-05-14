mrt-config 
==========

mrt-config is the tool used to manage the MrT Modules in your project. 

.. code:: bash 

    cd <path/to/project>
    mrt-config <relative/path/for/MrT/root>


.. note:: If no path is provided, it will default to ./MrT and create the directory if it does not exist


This will open the ``mrt-config`` tool which allows you to select which modules you would like to integrate into your project. The UI is based on `menuconfig` to be as flexible as possible in terms of where you can run it, ie in containers or remote development environments over ssh. 

.. image:: ../../images/mrt-config.png

.. note:: MrT Modules are added as git sub-modules, if you are in a directory that does not contain a git repo, it will initialize one.

