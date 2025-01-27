/* hlpstr.h
   ========
   Author: R.J.Barnes
*/

/*
 $License$
*/


char *hlpstr[]={
"map_plot - Plot map and cnvmap format files.\n",
"map_plot --help\n",
"map_plot [options] mapname [inxname]\n",
"map_plot -stdout [options] mapname [inxname]\n",
"map_plot -ps  [-xp xoff] [-yp yoff] [options] mapname [inxname]\n",
"map_plot -stdout -ps [-xp xoff] [-yp yoff] [options] mapname [inxname]\n",
"map_plot -ppm [options] mapname [inxname]\n",
"map_plot -ppm -stdout [options] mapname [inxname]\n",
"map_plot -ppmx [options] mapname [inxname]\n",
"map_plot -ppmx -stdout [options] mapname [inxname]\n",
"map_plot -xml [options] mapname [inxname]\n",
"map_plot -xml -stdout [options] mapname [inxname]\n",
"map_plot -x [-display display] [-xoff xoff] [-yoff yoff] [-delay delay] [options] mapname [inxname]\n",

"--help\tprint the help message and exit.\n",
"-path pathname\twrite the plots to the directory given by pathname.\n",
"-post post\tpost process the plots using the command post.\n",
"-cf cfname\tread command line options from the file cfname.\n",
"-new\tthe input file is a cnvmap format file.\n",
"-sd yyyymmdd\tplot starting from the date yyyymmdd.\n",
"-st hr:mn\tplot starting from the time hr:mn.\n",
"-ed yyyymmdd\tstop plotting at the date yyyymmdd.\n",
"-et hr:mn\tstop plotting at the time hr:mn.\n",
"-ex hr:mn\tplot an interval whose extent is hr:mn.\n",
"-tn\tgenerate filenames of the form <em>hrmn.sc.xxx</em>.\n",
"-dn\tgenerate filenames of the form <em>yyyymmdd.hrmn.sc.xxx</em>.\n",
"-mn\tuse the time of the midpoint of each record to generate the filename.\n",
"-wdt width\tset the width of the plot to width.\n",
"-hgt height\tset the height of the plot to height.\n",
"-padpad\tset the padding around the edge of the plot to  pad.\n",
"-sf scale\tset the scale factor (magnification) to scale. The default scale factor is 1.\n",
"-ortho\tuse an orthographic projection.\n",
"-lat lat\tcenter the plot on the latitude given by lat.\n",
"-lon lon\tcenter the plot on the longitude given by lon.\n",
"-latmin latmin\tadjust the scale factor so that the lowest visible latitude is  latmin. Applies when the stereographic projection is used.\n",
"-mag\tuse magnetic coordinates.\n",
"-rotate\trotate the plot so that the local noon is at the top of the plot.\n",
"-flip\tflip the direction of the X-axis.\n",
"-square\tforce the use of a square bounding box around the plot.\n",
"-coast\tplot coastlines.\n",
"-fcoast\tplot filled coastlines.\n",
"-bnd\tplot state boundaries.\n",
"-grd\tplot a grid.\n",
"-grdlat grdlat\tset the latitude spacing of the grid to grdlat degrees.\n",
"-grdlon grdlon\tset the longitude spacing of the grid to grdlon degrees.\n",
"-igrd\tplot the inverse grid, if the plot is in geographic coordinates, a geomagnetic grid is plotted, if the plot is in geomagnetic coordinates, a geographic grid is plotted.\n",
"-igrdlat igrdlat\tset the latitude spacing of the inverse grid to grdlat degrees.\n",
"-igrdlon igrdlon\tset the longitude spacing of the inverse grid to grdlon degrees.\n",
"-igrdontop\tplot the inverse grid on top.\n",
"-grdontop\tplot the grid on top.\n",
"-tmk\tplot a clock-dial grid showing the time.\n",
"-fov\tplot the radar field of view.\n",
"-ffov\tplot the filled radar field of view.\n",
"-tmtick tick\tset the grid interval for the time clock-dial to tick hours.\n",
"-lst\tuse local solar time rather than local time.\n",
"-term\tplot the terminator.\n",
"-fterm\tplot a filled terminator.\n",
"-tmlbl\tLabel the time clock-dial.\n",
"-lnewdt lnewdt\tset the line width to lnewdt.\n",
"-bgcol aarrggbb\tset the background color to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-txtcol aarrggbb\tset the color of the text to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-grdcol aarrggbb\tset the color of the grid to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-igrdcol aarrggbb\tset the color of the inverse grid to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-cstcol aarrggbb\tset the color of the coastline to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-bndcol aarrggbb\tset the color of the state boundaries to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-lndcol aarrggbb\tset the color of the land to aarrggbb, specified as the  hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-seacol aarrggbb\tset the color of the sea to aarrggbb, specified as the  hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-tmkcol aarrggbb\tset the color of the time clock-dial to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-fovcol aarrggbb\tset the color of the field of view outline to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-ffovcol aarrggbb\tset the color of the filled field of view to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-vecccol aarrggbb\tif a colorkey is not used then set the color of vectors to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-ctrcol aarrggbb\tset the color of contours to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-polycol aarrggbb\tset the color of contour polygons to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green\ and blue component color.\n",
"-fpolycol aarrggbb\tset the color of filled contour polygons to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,r\ed,green and blue component color.\n",
"-hmbcol aarrggbb\tset the color of the Heppner-Maynard boundary  to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-trmcol aarrggbb\tset the color of the terminator outline to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-ftrmcol aarrggbb\tset the color of the filled terminator outline to aarrggbb, specified as the hexadecimal value for the 32-bit alpha,red,green and blue component color.\n",
"-vkey vkeyname\tload the velocity colorkey from the file vkeyname.\n",
"-pkey pkeyname\tload the colorkey used to contour polygons from the file pkeyname.\n",
"-xkey xkeyname\tload the extra colorkey (used to plot power or spectral width) from the file xkeyname.\n",
"-fit\tplot the fitted two-dimensional velocity vectors.\n",
"-raw\tplot raw line of sight velocity vectors.\n",
"-mrg\tplot merged two-dimensional vectors.\n",
"-mod\tplot the model vectors.\n",
"-ctr\tplot potential contours.\n",
"-poly\tplot contours as simple polygons.\n",
"-fpoly\tplot contours as simple filled polygons.\n",
"-maxmin\tplot the points of maximum and minimum potential.\n",
"-hmb\tplot Heppner-Maynard boundary.\n",
"-exc\tplot velocity vectors excluded from the fit.\n",
"-pwr\tplot power.\n",
"-swd\tplot spectral width.\n",
"-avg\tif a cell contains more than one data point, plot the average power or spectral width.\n",
"-max\tif a cell contains more than one data point, plot the maximum power or spectral width.\n",
"-min\tif a cell contains more than one data point, plot the minimum power or spectral width.\n",
"-modn\tplot the name of the statistical model.\n",
"-imf\tplot the IMF clock-dial.\n",
"-pot\tplot the cross polar cap potential.\n",
"-extra\tplot extra diagnostic information.\n",
"-source\tplot the source string.\n",
"-vkeyp\tplot the color key for the velocity scale.\n",
"-pkeyp\tplot the color key for the potential scale.\n",
"-xkeyp\tplot the extra color key for the power or spectrral width scale.\n",
"-vecp\tplot the example vector.\n",
"-vsf vsf\tset the vector scale factor to vsf.\n",
"-vrad vrad\tset the radius of the dot a the vector root to vrad.\n",
"-logo\tplot the logo and credits.\n",
"-time\tplot the time of the plotted data.\n",
"-vmax vmax\tset the absolute velocity scale maximum to vmax.\n",
"-pmax pmax\tset the power scale maximum to pmax.\n",
"-wmax vmax\tset the spectral width scale maximum to wmax.\n",
"-frame\tadd a frame around the borders of the plot.\n",
"-over\tthe output plot will be overlaid on another plot, do not paint the background with the bacground color.\n",
"mapname\tfilename of the map or cnvmap format file to plot.\n",
"inxname\tfilename of the index file associated with the  grid format file to plot.\n",
"-stdout\tplot a single data record and write the plot to standard output.\n",
"-d yyyymmdd\tplot the data on date yyyymmdd.\n",
"-t hr:mn\tplot the data at the time hr:mn.\n",
"-ps\tproduce a PostScript plot as the output.\n",
"-xp xoff\tset the X offset of the PostScript plot to xoff.\n",
"-yp xoff\tset the Y offset of the PostScript plot to yoff.\n",
"-ppm\tproduce a Portable PixMap (PPM) image as the output.\n",
"-ppmx\tproduce an extended Portable PixMap (PPMX) image as the output.\n",
"-xml\tproduce an XML image representation as the output.\n",
"-x\tplot the data on an X-terminal.\n",
"-display display\tconnect to the xterminal named display.\n",
"-xoff xoff\topen the window, xoff pixels from the left edge of the screen.\n",
"-yoff yoff\topen the window ypad pixels from the top edge of the screen.\n",
"-delay delay\tset the delay between frames to delay milliseconds, a value of 0 will pause the frame until a mouse button is pressed.\n",

NULL};
