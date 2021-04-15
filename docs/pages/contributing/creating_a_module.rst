Creating a Module 
===================


``mrt-config`` works by grabbing the list of submodules in the main uprev-mrt_ repo . When you import a module into your project, it adds that submodule to your project using the same relative path it has in the main repo. 

So to add a module, you need to create a repo for the module, and then add it as a submodule to the uprev-mrt_ repo. 


.. note:: Repo names for modules should be all lowercase and hyphenated with the module category as a prefix. example: the ``Fifo`` module's repo is ``utility-fifo``

**mrt.yml file**


Every module should contain an ``mrt.yml`` file with a name, description, category, and requires field 

example from ``Fifo`` module:

.. code-block:: yaml 

    ---
    name: fifo
    description: generic fifo utility
    category: utility
    requires: []


Once you have the basic module added, you can begin adding code. The modules structure will vary based on what type of module it is. See below for specifics when adding a :ref:`Platform <adding_platforms>` , :ref:`Device <adding_devices>` , or :ref:`Utility <adding_utilities>` module

.. _uprev-mrt : https://bitbucket.org/uprev/uprev-mrt/src/master/