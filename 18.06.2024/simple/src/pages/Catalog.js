import React from 'react';

function Catalog() {
  return (
    <section className="py-8 bg-gray-50 dark:bg-gray-800">
      <div className="container mx-auto px-4">
        <h2 className="text-3xl font-bold text-gray-900 dark:text-white mb-8">Catalog</h2>
        <div className="grid grid-cols-1 sm:grid-cols-2 md:grid-cols-3 lg:grid-cols-4 gap-8">
          {/* Product 1 */}
          <div className="bg-white dark:bg-gray-900 p-4 rounded-lg shadow-md">
            <img
              src="https://via.placeholder.com/300"
              alt="Product 1"
              className="w-full h-48 object-cover rounded-t-lg"
            />
            <h3 className="text-xl font-semibold text-gray-900 dark:text-white mt-4">Product 1</h3>
            <p className="text-gray-600 dark:text-gray-400 mt-2">Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
            <div className="flex justify-between items-center mt-4">
              <span className="text-xl font-bold text-gray-900 dark:text-white">$49.99</span>
              <button className="px-4 py-2 bg-blue-500 text-white rounded-lg hover:bg-blue-600 dark:bg-blue-600 dark:hover:bg-blue-700">
                Add to Cart
              </button>
            </div>
          </div>

          {/* Product 2 */}
          <div className="bg-white dark:bg-gray-900 p-4 rounded-lg shadow-md">
            <img
              src="https://via.placeholder.com/300"
              alt="Product 2"
              className="w-full h-48 object-cover rounded-t-lg"
            />
            <h3 className="text-xl font-semibold text-gray-900 dark:text-white mt-4">Product 2</h3>
            <p className="text-gray-600 dark:text-gray-400 mt-2">Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>
            <div className="flex justify-between items-center mt-4">
              <span className="text-xl font-bold text-gray-900 dark:text-white">$39.99</span>
              <button className="px-4 py-2 bg-blue-500 text-white rounded-lg hover:bg-blue-600 dark:bg-blue-600 dark:hover:bg-blue-700">
                Add to Cart
              </button>
            </div>
          </div>

          {/* Product 3 */}
          <div className="bg-white dark:bg-gray-900 p-4 rounded-lg shadow-md">
            <img
              src="https://via.placeholder.com/300"
              alt="Product 3"
              className="w-full h-48 object-cover rounded-t-lg"
            />
            <h3 className="text-xl font-semibold text-gray-900 dark:text-white mt-4">Product 3</h3>
            <p className="text-gray-600 dark:text-gray-400 mt-2">Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
            <div className="flex justify-between items-center mt-4">
              <span className="text-xl font-bold text-gray-900 dark:text-white">$59.99</span>
              <button className="px-4 py-2 bg-blue-500 text-white rounded-lg hover:bg-blue-600 dark:bg-blue-600 dark:hover:bg-blue-700">
                Add to Cart
              </button>
            </div>
          </div>

          {/* Product 4 */}
          <div className="bg-white dark:bg-gray-900 p-4 rounded-lg shadow-md">
            <img
              src="https://via.placeholder.com/300"
              alt="Product 4"
              className="w-full h-48 object-cover rounded-t-lg"
            />
            <h3 className="text-xl font-semibold text-gray-900 dark:text-white mt-4">Product 4</h3>
            <p className="text-gray-600 dark:text-gray-400 mt-2">Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.</p>
            <div className="flex justify-between items-center mt-4">
              <span className="text-xl font-bold text-gray-900 dark:text-white">$29.99</span>
              <button className="px-4 py-2 bg-blue-500 text-white rounded-lg hover:bg-blue-600 dark:bg-blue-600 dark:hover:bg-blue-700">
                Add to Cart
              </button>
            </div>
          </div>

          {/* Product 5 */}
          <div className="bg-white dark:bg-gray-900 p-4 rounded-lg shadow-md">
            <img
              src="https://via.placeholder.com/300"
              alt="Product 5"
              className="w-full h-48 object-cover rounded-t-lg"
            />
            <h3 className="text-xl font-semibold text-gray-900 dark:text-white mt-4">Product 5</h3>
            <p className="text-gray-600 dark:text-gray-400 mt-2">Curabitur pretium tincidunt lacus. Nulla gravida orci a odio.</p>
            <div className="flex justify-between items-center mt-4">
              <span className="text-xl font-bold text-gray-900 dark:text-white">$69.99</span>
              <button className="px-4 py-2 bg-blue-500 text-white rounded-lg hover:bg-blue-600 dark:bg-blue-600 dark:hover:bg-blue-700">
                Add to Cart
              </button>
            </div>
          </div>

          {/* Product 6 */}
          <div className="bg-white dark:bg-gray-900 p-4 rounded-lg shadow-md">
            <img
              src="https://via.placeholder.com/300"
              alt="Product 6"
              className="w-full h-48 object-cover rounded-t-lg"
            />
            <h3 className="text-xl font-semibold text-gray-900 dark:text-white mt-4">Product 6</h3>
            <p className="text-gray-600 dark:text-gray-400 mt-2">Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>
            <div className="flex justify-between items-center mt-4">
              <span className="text-xl font-bold text-gray-900 dark:text-white">$79.99</span>
              <button className="px-4 py-2 bg-blue-500 text-white rounded-lg hover:bg-blue-600 dark:bg-blue-600 dark:hover:bg-blue-700">
                Add to Cart
              </button>
            </div>
          </div>

          {/* Product 7 */}
          <div className="bg-white dark:bg-gray-900 p-4 rounded-lg shadow-md">
            <img
              src="https://via.placeholder.com/300"
              alt="Product 7"
              className="w-full h-48 object-cover rounded-t-lg"
            />
            <h3 className="text-xl font-semibold text-gray-900 dark:text-white mt-4">Product 7</h3>
            <p className="text-gray-600 dark:text-gray-400 mt-2">Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
            <div className="flex justify-between items-center mt-4">
              <span className="text-xl font-bold text-gray-900 dark:text-white">$89.99</span>
              <button className="px-4 py-2 bg-blue-500 text-white rounded-lg hover:bg-blue-600 dark:bg-blue-600 dark:hover:bg-blue-700">
                Add to Cart
              </button>
            </div>
          </div>

          {/* Product 8 */}
          <div className="bg-white dark:bg-gray-900 p-4 rounded-lg shadow-md">
            <img
              src="https://via.placeholder.com/300"
              alt="Product 8"
              className="w-full h-48 object-cover rounded-t-lg"
            />
            <h3 className="text-xl font-semibold text-gray-900 dark:text-white mt-4">Product 8</h3>
            <p className="text-gray-600 dark:text-gray-400 mt-2">Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.</p>
            <div className="flex justify-between items-center mt-4">
              <span className="text-xl font-bold text-gray-900 dark:text-white">$99.99</span>
              <button className="px-4 py-2 bg-blue-500 text-white rounded-lg hover:bg-blue-600 dark:bg-blue-600 dark:hover:bg-blue-700">
                Add to Cart
              </button>
            </div>
          </div>
        </div>
      </div>
    </section>
  );
}

export default Catalog;
