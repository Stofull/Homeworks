import { useParams } from 'react-router-dom';

const products = [
  { id: 1, name: 'Product 1', description: 'Description for product 1', price: '$10', image: 'https://i.imgur.com/w7JUoWG.png' },
  { id: 2, name: 'Product 2', description: 'Description for product 2', price: '$20', image: 'https://i.imgur.com/w7JUoWG.png' },
];

function ProductDetail() {
  const { id } = useParams();
  const product = products.find(p => p.id === parseInt(id, 10));

  if (!product) return <p>Product not found</p>;

  return (
    <div>
      <h1 className="text-3xl font-bold mb-6">{product.name}</h1>
      <div className="bg-white border rounded-lg shadow-md p-4">
        <img src={product.image} alt={product.name} className="w-full h-80 object-cover mb-4 rounded" />
        <p className="text-gray-600 mb-4">{product.description}</p>
        <p className="text-lg font-bold mb-4">{product.price}</p>
      </div>
    </div>
  );
}

export default ProductDetail;
