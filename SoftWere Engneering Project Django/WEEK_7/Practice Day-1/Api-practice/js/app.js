document.addEventListener("DOMContentLoaded", () => {
  const api = "https://fakestoreapi.com";
  const productList = document.getElementById("product_list");
  const productDetail = document.getElementById("product_details");
  const categoryFilter = document.getElementById("category_filter");
  const allProductButton = document.getElementById("all_products");

  const fetchAllProduct = async () => {
    try {
      const res = await fetch(`${api}/products`);
      const products = await res.json();
      displayProducts(products);
    } catch (error) {
      console.error("Error Featching Products  : ", error);
    }
  };

  const fetchCategories = async () => {
    try {
      const res = await fetch(`${api}/products/categories`);
      const categories = await res.json();
      populateCategories(categories);
    } catch (error) {
      console.error("Error Featching Categories : ", error);
    }
  };

  const displayProducts = (products) => {
    productList.innerHTML = "";
    productDetail.style.display = "none";

    products.forEach((product) => {
      const productCard = document.createElement("div");
      productCard.className = "product-card";
      productCard.innerHTML = `
         <div class="container">
            <img src="${product.image
        }" alt="img" style="width:450px; height:450px;  border-radius:20px;">
            <h1>ID : ${product.id}</h1>
            <h3>Title : ${product.title}</h3>
            <h6>Price : ${product.price}</h6>
            <h6>Description :  ${product.description.slice(0, 18)}...</h6>
            <h4>Category : ${product.category}</h4>
            <button class="btn btn-info" onclick="showProductDetails(${product.id
        })">View Details</button>
            <br><br><br>
         </div>
      `;
      productList.appendChild(productCard);
    });
  };

  const populateCategories = (categories) => {
    categories.forEach((category) => {
      const option = document.createElement("option");
      option.value = category;
      option.textContent = category;
      categoryFilter.appendChild(option);
    });
  };

  const fetchProductByCategory = async (category) => {
    try {
      const res = await fetch(`${api}/products/category/${category}`);
      const products = await res.json();
      displayProducts(products);
    } catch (error) {
      console.error("Error Featching Products By Category : ", error);
    }
  };

  window.showProductDetails = async (productId) => {
    try {
      const res = await fetch(`${api}/products/${productId}`);
      const product = await res.json();
      displayProductDetails(product);
    } catch (error) {
      console.error("Error Featching Product Details : ", error);
    }
  };

  const displayProductDetails = (product) => {
    productDetail.style.display = "block";
    productDetail.innerHTML = `
       <div class="container">
          <img src="${product.image}" alt="img" style="width:950px; height:950px; border-radius:20px;">
          <h1>ID : ${product.id}</h1>
          <h2>Title : ${product.title}</h2>
          <h6>Description :  ${product.description}</h6>
          <h3>Price : ${product.price}</h3>
          <h4>Category : ${product.category}</h4>
          <button class="btn btn-secondary Back-To-Products">Back To Products</button>
          <br><br><br>
       </div>
    `;
    productList.innerHTML = "";
    document.querySelector(".Back-To-Products").addEventListener("click", fetchAllProduct);
  };

  allProductButton.addEventListener("click", fetchAllProduct);
  categoryFilter.addEventListener("change", (event) => {
    if (event.target.value) {
      fetchProductByCategory(event.target.value);
    } else {
      fetchAllProduct();
    }
  });

  fetchAllProduct();
  fetchCategories();
});
