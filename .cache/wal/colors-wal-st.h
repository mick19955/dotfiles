const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1c1519", /* black   */
  [1] = "#504E4F", /* red     */
  [2] = "#5C605E", /* green   */
  [3] = "#874235", /* yellow  */
  [4] = "#1C9C9E", /* blue    */
  [5] = "#4F9295", /* magenta */
  [6] = "#449F9F", /* cyan    */
  [7] = "#80e0e0", /* white   */

  /* 8 bright colors */
  [8]  = "#599c9c",  /* black   */
  [9]  = "#504E4F",  /* red     */
  [10] = "#5C605E", /* green   */
  [11] = "#874235", /* yellow  */
  [12] = "#1C9C9E", /* blue    */
  [13] = "#4F9295", /* magenta */
  [14] = "#449F9F", /* cyan    */
  [15] = "#80e0e0", /* white   */

  /* special colors */
  [256] = "#1c1519", /* background */
  [257] = "#80e0e0", /* foreground */
  [258] = "#80e0e0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
