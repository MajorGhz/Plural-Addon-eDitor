from optparse import OptionParser

def main():

# définition et option et de l'aide des commande
    usage = "usage: %prog [options] file"
    parser = OptionParser(usage=usage)
    parser.add_option("-v", "--verbose",
        action="store_true", dest="verbose", default=True,
        help="make lots of noise [default]")
    parser.add_option("-q", "--quiet",
        action="store_false", dest="verbose",
        help="be vewwy quiet (I'm hunting wabbits)")
    parser.add_option("-f", "--file",
        metavar="CONFIG_FILE", help="read from config file")
    parser.add_option("-m", "--mode",
        default="intermediate",
        help="interaction mode: novice, intermediate, "
        "or expert [default: %default]")

    (options, args) = parser.parse_args()
    if len(args) != 1:
        parser.error("incorrect number of arguments")
#    if options.verbose:
#            print("reading %s..." % options.filename)


if __name__ == "__main__":
    main()
