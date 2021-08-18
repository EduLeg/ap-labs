package main

import (
	"fmt"
	"os"
)

func main() {

	if len(os.Args) > 2 {

		var size = len(os.Args)

		fmt.Printf("Welcome ")

		for i := 1; i < size; i++ {
			fmt.Printf("%v ", os.Args[i])
		}
		fmt.Println(" to the jungle")

	} else {
		fmt.Println("You must have a input")
	}

}
