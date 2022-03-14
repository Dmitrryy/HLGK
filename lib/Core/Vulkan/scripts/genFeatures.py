import site

site.addsitedir('../dependencies/Vulkan-Docs/scripts')
from reg import Registry
import sys
import os
import tempfile
import shutil
import templates

try:
    from pathlib import Path
except ImportError:
    from pathlib2 import Path


if __name__ == '__main__':
    print('nope')
