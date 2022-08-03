Step 1: Installing tools 
===========================

MrT modules are just individual git repositories that get included in your project as `submodules <https://git-scm.com/book/en/v2/Git-Tools-Submodules>`_ . You could simply add them as submodules manually, but this would require looking up the urls, and making sure the path to each module is correct, because some modules reference others. 

To make this easier, you can use the mrt-config tool from the `mrttutils <https://github.com/uprev-mrt/mrtutils/wiki>`_ package. 

`mrttutils <https://github.com/uprev-mrt/mrtutils/wiki>`_  is a python package managed with pip 

.. code-block:: bash

    pip3 install mrtutils








