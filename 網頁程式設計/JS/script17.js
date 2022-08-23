// event listener
/*
function hadle_click(element){
    // alert("1");
    // console.log(element);
    element.innerText = "2";
    element.style.color = "red";
}
*/
// 按按鈕時
var btn = document.getElementById("btn");
btn.addEventListener("click", function () {
    // alert("1");
    this.innerText = "2";
    this.style.color = "red";
})
// 滑鼠滑上時
var img = document.getElementById("img");
img.addEventListener("mouseover", function () {
    this.src = "2.jpg";
})
// 滑鼠滑走時
img.addEventListener("mouseout", function () {
    this.src = "1.jpg";
})