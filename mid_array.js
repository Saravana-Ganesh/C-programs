var row = prompt("Enter row size");
var col = prompt("Enter column size");
var arr = [];
for(var i=0;i<row;i++){
   arr[i]=[];
}
if(row<=2&&col<=2){
	alert("Enter row or col elements size greater than 2");
}
else{
	for(var i=0; i<row; i++){
		for(var j=0; j<col;j++){
		arr[i][j]=prompt();
		}
	}
	if(row%2==1 && col%2==1){
		all_odd();
	}
	else if(row%2==1&&col%2==0){
		row_odd_col_even();
	}
	else if(row%2==0&&col%2==1){
		row_even_col_odd();
	}
	else{
		all_even();
	}
}
function all_odd(){
console.log(arr[parseInt(row/2)][parseInt(col/2)]);
}
function row_odd_col_even(){
	--row,--col;
	for(var i=0; i<2;i++){
		console.log(arr[parseInt(row/2)][parseInt(col/2)+i]);
	}
	++row,++col;
}
function row_even_col_odd(){
	--row,--col;
	for(var i=0; i<2;i++){
		console.log(arr[parseInt(row/2)+i][parseInt(col/2)]);
	}
	++row,++col;
}
function all_even(){
	--row,--col;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			console.log(arr[parseInt(row/2)+i][parseInt(col/2)+j]);
		}
	}
}