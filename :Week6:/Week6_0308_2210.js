for (var i = 0; i < size / 2; i++){
    pattern1 += " x";
    pattern2 += "x ";
}

for (int i = 0; i < size; i++){
    if (i % 2 == 0){
    console.log(pattern1);
    } else {
    console.log(pattern2);
    }
}
